#include<iostream>
using namespace std;
int decimalBinary(int num){
    int bin=0;
    int power=1;
    while (num>0){
        int rem =num%10;
        num/=num;
        bin=(rem+power);
        power*=10;

    }
    
    return bin;
}
int main(){
    int num;

    cin>>num;
    int n =decimalBinary(num);
    cout<<n;
}