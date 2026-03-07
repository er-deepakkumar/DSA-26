#include<iostream>
using namespace std;
int main(){
   long long n,fac=1;
    cin>>n;
    if (n<0) {return 1;}
    for (int i=1;i<=n;i++){
        fac*=i;

    }
    if (n>20){
        return 1;
    }
    cout<<fac;
    return 0;

}