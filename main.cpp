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

    /*
    int dorm_num = 3;
    int test_num = 6;

    int dormRoomInfo[] = {10, 15, 12};
    int testCases[] =  { 1 , 9 , 12, 23, 26, 37};

    for (int i = 0; i < test_num; i++){
        int l = testCases[i];
        cout << "L: " << l << endl;
        int sim = l * 1;
        int dorm = 0; 
        while (sim > 0){
            sim -= dormRoomInfo[dorm];
            dorm ++;
        }

        int room = dormRoomInfo[dorm -1] + sim;
        cout << "Sim: " << sim << " Dorm: " << dorm << " Room: " << room << endl;

    }
    */
    for (int i = 0; i < test_num; i++){
        long l = getLong();

        // cout << "L: " << l << endl;
        long sim = l * 1;

        long dorm = 0; 
        while (sim > 0){
            sim -= dormRoomInfo[dorm];
            
            dorm ++;
        }

        long room = dormRoomInfo[dorm -1] + sim;
        // cout << "Sim: " << sim << " Dorm: " << dorm << " Room: " << room << endl;
        cout << dorm << " " << room << endl;


    }

    return 0;

}
