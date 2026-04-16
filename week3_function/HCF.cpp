#include<iostream>
using namespace std;
int hcf(int n1,int n2){
    // swap
   while (n2!=0)
   {
    /* code */
    int temp;
    temp=n2;
    n2=n1%n2;
    n1=temp;
   }
   return n1;
   
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int ans=hcf(n1,n2);
    cout<<ans;
}