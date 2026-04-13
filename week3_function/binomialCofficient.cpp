#include<iostream>
using namespace std;
int factorial(int num){
    long long fact=1;
    if (num==0)return 1;
    for(int i=1;i<=num;i++){
        fact*=i;

    }
    return fact;
}
int binomialCoff(int n,int r){
    int ans;
    if(r > n){
        cout << "Invalid: r cannot be greater than n" << endl;
        return -1;
    }
    ans=(factorial(n)/(factorial(r)*factorial(n-r)));
    return ans;
}
int main(){
    int n=8;int r=2;
    cout<<binomialCoff(n,r);
    return 0;
}