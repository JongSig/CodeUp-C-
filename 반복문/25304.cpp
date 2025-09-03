#include<iostream>
using namespace std;

int main(){
    int X;
    cin >> X;

    int N;
    cin >> N;

    int a, b, sum = 0;
    for(int i=1; i<=N; i++){
        cin >> a >> b;
        sum += a*b;
    }

    if(X == sum) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}