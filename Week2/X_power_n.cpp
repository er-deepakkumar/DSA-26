#include<iostream>
using namespace std;
int main(){
    int x,n;
    long long ans=1;
    cin>>x >>n;
    if (n<0){
        return 1;
    }
    if(n<=20){
    for (int i=1;i<=n;i++){
        ans*=x;
    }
    }
    cout<<ans;
    return 0;
}