#include <iostream>
using namespace std;
int main(){
    long long a,b,c,x,y;
    cin>>a>>b>>c;
    if(a>b && a>c){
        y=a;
        if(b>c){
            x=c;
        }
        else{
        x=b;}
    }
    
    else if(b>a && b>c){
        y=b;
        if(c>a){
            x=a;
        }
        else{x=c;}
    }else{
        y=c;
        if(a>b){
            x=b;
        }
        else{
            x=a;
        }
        

    }
    cout<<"Min = "<< x <<endl;
    cout<<"Max = "<<y <<endl;
    
}