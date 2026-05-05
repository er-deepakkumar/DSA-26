#include<iostream>
using namespace std;
int main(){
    int decNum;
    cin>>decNum;
    int ans=0;int power=1;
    while (decNum>0)
    {
        int rem=decNum%2;
        decNum=decNum/2;
        ans+=(rem*power);
        power*=10;
        
    }
    cout<<ans;
    return 0;
    
}
