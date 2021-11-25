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
    
    for (int i = 0; i < dorm_num; i++){
        dormRoomInfo[i] = getLongLong();
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
