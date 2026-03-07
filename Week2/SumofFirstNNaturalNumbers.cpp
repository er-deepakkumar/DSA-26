// #include<iostream>
// using namespace std;
// int main(){
//     long sum=0,num;
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         sum+=i;
//     }
//     cout<<sum<<endl;
// }
// Your code fails on Codeforces because N can 
// be very large, so using a loop is not the best approach. 
// The correct way is to use the mathematical formula for the 
// sum of the first N natural numbers.

#include<iostream>
using namespace std;
int main(){
    long long n,sum;
    cin>>n;
     sum=n*(n+1)/2;
     cout<<sum;
}
