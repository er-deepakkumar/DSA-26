// #include<iostream>
// using namespace std;
// int main(){
//     long long n,m;
//     cin>>n>>m;
//     if(m%n==0){
//         cout<<"Yes"<<endl;
//     }else{
//         cout<<"No"<<endl;
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cin>>m;
//     if(m>=35){
//         cout<<"Pass"<<endl;
//     }else{
//         cout<<"Fail"<<endl;
//     }
// }

#include <iostream>
using namespace std;
int main(){
    long long x,y;
    cin>>x>>y;
    if(x>y){
        cout<<"Min = "<<y<<endl;
        cout<<"Max = "<<x<<endl;
    }
  
    {
        cout<<"Min = "<<x<<endl;
        cout<<"Max = "<<y<<endl;
    }
}