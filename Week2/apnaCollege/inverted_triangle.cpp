// //  inverted triangle pattern
// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<n-i;k++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
// }




// //  inverted pyramid pattern
// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<n-i;k++){
//             cout<<i+1<<" ";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n=4;
     char ch='A';
    for(int i=0;i<n;i++){
       
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<ch;
        }
        cout<<endl;
        ch+=1;

    }
}