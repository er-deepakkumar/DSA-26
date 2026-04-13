#include<iostream>
using namespace std;
int factorial(int n){
    int sum=1;
    if(n<0){
        return 1;
    }
    for(int i=1;i<=n;i++){
        sum*=i;

    }
    return sum;
}
int main(){
cout<<factorial(2);
return 0;
}