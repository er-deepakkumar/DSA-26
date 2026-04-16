#include<iostream>
using namespace std;
int factorPrint(int n){
    for(int i=n;i>=1;i--){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    factorPrint(n);

}