#include<iostream>
using namespace std;

int main(){
    int A, B;
    int cooking_time;

    cin >> A >> B;
    cin >> cooking_time;

    B += cooking_time;
    A += B/60;
    B %= 60;

    if(A >= 24) A %= 24;

    cout << A << " " << B << endl;

    return 0;
}