// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         cout<<endl;
//         if i==0:
//         else if 
        
//     }
    
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // 1. Leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // 2. Stars and Internal Spaces
        for (int j = 1; j <= i; j++) {
            // Print star if: first col, last col, or last row
            if (j == 1 || j == i || i == n) {
                cout << "* ";
            } else {
                cout << "  "; // Two spaces to match the "* " width
            }
        }
        cout << endl;
    }
    return 0;




    
}