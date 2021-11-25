#include <iostream>
 
using namespace std;

int getInt(){
    string holder;
    cin >> holder;
    int i = stoi(holder);

    return i;
}

long getLong(){
    string holder;
    cin >> holder;
    long l = stol(holder);
    return l;
}

int main() {

    int dorm_num = getInt();
    int test_num = getInt();

    long dormRoomInfo[dorm_num];
    for (int i = 0; i < dorm_num; i++){
        dormRoomInfo[i] = getLong();
    }

    for (int i = 0; i < test_num; i++){
        long l = getLong();

        long dorm = 0; 
        while (l > 0){
            l -= dormRoomInfo[dorm];
            dorm ++;
        }

        long room = dormRoomInfo[dorm -1] + l;
        cout << dorm << " " << room << endl;

    }

    return 0;

}
