#include<iostream>
using namespace std;
int main(){
    int first_integer,second_integer;
    cin>>first_integer>>second_integer;
    int lastDigitN=first_integer%10;
    int lastDigitM=second_integer%10;
    cout<<lastDigitM+lastDigitN<<endl;
}