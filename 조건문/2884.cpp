#include<iostream>
using namespace std;

int main(){
    int hour, minute;

    cin >> hour >> minute;

    if(minute < 45){
        minute = minute + 15;
        hour = hour - 1;
        if(hour < 0) hour = 23;
    }else minute = minute - 45;

    cout << hour << " " << minute << endl;

    return 0;
}
