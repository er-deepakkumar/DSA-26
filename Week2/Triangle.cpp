// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     if(!(cin>>n))return 0;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<=n-i;j++)
//         cout<<" ";
//         for(int j=1;j<=i;j++)
//         cout<<"* ";
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    long n;
    if (!(cin >> n)) return 0;

    for (int i = 1; i <= n; i++) {
        // 1. Print leading spaces: exactly n-i spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "0";
        }

        // 2. Print stars with a single space between them
        for (int j = 1; j <= i; j++) {
            cout << "*";
            // Print a space only if it's NOT the last star in the row
            if (j < i) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
// 