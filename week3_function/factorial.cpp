#include<iostream>
using namespace std;
void factorial(int n){
    long long fact=1;
    if (n==0) {cout<<1;
    return;}
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<fact;
    



}
int main(){
    int n;
    cin>>n;
    factorial(n);
    

}
