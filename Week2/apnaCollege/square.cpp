// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         int num=1;
//         for(int j=0;j<n;j++){
//             cout<<num<<" ";
//             num+=1;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
        
//         for(int j=1;j<=n;j++){
//             cout<<"* ";
            
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         char ch='A';
//         for(int j=1;j<=n;j++){
//             cout<<ch<<" ";
//             ch+=1;
            
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int num=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<num<<" ";
//             num+=1;
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// #include <iomanip>   // needed for setw  Full form → Input Output Manipulation    setw-> set width

// int main() {
//     int n = 4;
//     int num = 1;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout <<setw(n)<<num;
//             num += 1;
//         }
//         cout << endl;
//     }
// }

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<setw(n)<<ch;
            ch+=1;
        }
        cout<<endl;
    }
}