#include<iostream>
using namespace std;
void function(int n){
    for(int i=1;i<=n;i++){
        cout<<"I am learning functions\n";
    }

}
int main(){
    int n;
    cin>>n;
    function(n);
    return 0;
}
