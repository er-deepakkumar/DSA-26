// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        
        // leading spaces
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        
        // first star
        cout << "*";
        
        if(i == n-1){
            // last row: all stars with spaces
            for(int j = 1; j < n; j++){
                cout << " *";
            }
        } else if(i != 0){
            // middle rows: gap then second star
            for(int j = 0; j < 2*i-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        
        cout << endl;
    }
}