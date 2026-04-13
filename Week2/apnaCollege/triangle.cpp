// Triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// Triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<i+1<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     char ch='A';
//     for(int i=0;i<n;i++){
        
//         for(int j=0;j<i+1;j++){
//             cout<<ch;
//         }
//         cout<<endl;
//         ch+=1;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        int num=1;
        for(int j=0;j<i+1;j++){
            cout<<num<<" ";

            num+=1;
        }
        cout<<endl;
    }
}