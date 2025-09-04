// #include<iostream>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int N;
//     cin >> N;

//     for(int i=0; i<N; i++){
//         for(int j=0; j<N-i-1; j++) cout << " ";
//         for(int j=0; j<=i; j++) cout << "*";
//         cout << "\n";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        cout << string(N - i - 1, ' ')
            << string(i + 1, '*')
            << "\n";
    }

    return 0;
}