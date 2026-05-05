#include<iostream>
using namespace std;
int main(){
    int binNum;
    cin>>binNum;
    int decNum=0;int power=1;
    while (binNum>0)
    { int rem=binNum%10;
        decNum+=rem*power;
        binNum/=10;
        power*=2;
    
    }
    cout<<decNum;
    return 0;
}