#include<iostream> 
using namespace std;
int sumOfNum(int n){
    
    int sum=0;
    for(int i=1;i<=n;i++ ){
        sum+=i;
    }
    return sum;
}
int main(){
    int ans=sumOfNum(10);
    cout<<ans;
    cout<<endl;
    return 0;
    

}