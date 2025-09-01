// #include<iostream>
// using namespace std;

// int main(){
//     int num1, num2, num3;
//     int res;

//     cin >> num1 >> num2 >> num3;

//     if(num1 == num2 && num2 == num3) res = 10000 + num1 * 1000;
//     else if(num1 == num2 || num2 == num3 || num3 == num1) {
//         int same;
//         if(num1 == num2) same = num1;
//         else if (num2 == num3) same = num2;
//         else same = num3;
//         res = 1000 + same * 100;
//     } else {
//         int big;
//         if(num1 > num2) big = num1;
//         else big = num2;
//         if(big < num3) big = num3;
//         res = big * 100;
//     }
//     cout << res << endl;

//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int res;
    if(a == b && b == c){
        res = 10000 + a*1000;
    }else if(a == b || b==c || c == a){
        int same = (a == b) ? a : (b == c ? b : c);
        res = 1000 + same * 100;
    }else {
        res = max({a, b, c}) * 100;
    }

    cout << res << endl;
    return 0;
}