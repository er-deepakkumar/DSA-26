#include<iostream>
using namespace std;
long long countZero(long long n){
    long long count=0;
    if (n==0) return 1;
    while (0<n)
    {
        int lastDigit=n%10;
        if(lastDigit==0){
            count++;
        }
        n/=10;
    }
    return count;
    
}
int main(){
    long long n;
    cin>>n;
    long long ans=countZero(n);
    cout<<ans;

}