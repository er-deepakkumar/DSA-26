// #include <iostream>

// int main() {
//     int n = 7; // Size of the Z (height and width)

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             // Condition for top row, bottom row, and diagonal
//             if (i == 0 || i == n - 1 || i + j == n - 1) {
//                 std::cout << "*";
//             } else {
//                 std::cout << " "; // Print space for the empty parts
//             }
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(i==0 || i==n-1 || i+j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }cout<<endl;
    }
}