#include <iostream>
 
using namespace std;

int getInt(){
    string holder;
    cin >> holder;
    int i = stoi(holder);

    return i;
}

long long getLongLong(){
    string holder;
    cin >> holder;
    long long l = stoll(holder);
    return l;
}


long long opti_index(long long* a, long long len, long long v){
	long long l = 0;
    long long r = len - 1;
    long long opti_index = -1;

    while (l <= r  ){
        long long m = l + ((r - l) / 2);
        if (a[m] == v ){
            opti_index = m - 1;
            break;
        }
        // If x greater, ignore left half
        if (a[m] < v){
            l = m + 1;
        } else{ // if x is smaller ignore right half
            r = m - 1;
        }
    }

	if (opti_index == -1){ // if not found, use the (lower) last searched value
		opti_index = l - 1;
	}

	return opti_index;
}



int main() {

    int dorm_num = getInt();
    int test_num = getInt();

    long long dormRoomInfo[dorm_num];

    int subtracts_len = dorm_num + 1;
    long long subtracts[subtracts_len];
    subtracts[0] = 0;
    for (int i = 0; i < dorm_num; i++){
        dormRoomInfo[i] = getLongLong();
        subtracts[i + 1] = dormRoomInfo[i] + subtracts[i]; 
    }
    // for (int i = 0; i < subtracts_len; i ++){
    //     cout << "Subtracts[" << i << "]: " << subtracts[i] << endl;
    // }

    
    for (int i = 0; i < test_num; i++){
        long long l = getLongLong();
        // cout << "L: " << l << endl;
        long long opti = opti_index(subtracts, subtracts_len, l) ;
        long long opti_val = subtracts[opti];
        long long dorm = opti + 1;
        // cout << "Dorm: " << dorm << endl;

        // long long dorm = 0; 
        // while (l > 0){
        //     l -= dormRoomInfo[dorm];
        //     dorm ++;
        // }

        long long room = l - subtracts[opti];
        cout << dorm << " " << room << endl;

    }

    return 0;

}
