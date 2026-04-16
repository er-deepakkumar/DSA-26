#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if (n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%1==0){
            return false;
        }
    }

    return true;
}
int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"Prime";
        
    }
    else
    cout<<"Not Prime";
}
