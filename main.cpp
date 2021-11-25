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
    for (int i = 0; i < subtracts_len; i ++){
        cout << "Subtracts[" << i << "]: " << subtracts[i] << endl;
    }

    
    for (int i = 0; i < test_num; i++){
        long long l = getLongLong();

        long long dorm = 0; 
        while (l > 0){
            l -= dormRoomInfo[dorm];
            dorm ++;
        }

        long long room = dormRoomInfo[dorm -1] + l;
        cout << dorm << " " << room << endl;

    }

    return 0;

}
