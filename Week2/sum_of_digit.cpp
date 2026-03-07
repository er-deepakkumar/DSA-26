// 

#include<iostream>
using namespace std;
int main(){
    long long n, sum = 0;
    cin >> n;
    
    // Handle negative by absolute value
    if(n < 0) n = -n;
    
    do {
        sum += (n % 10);
        n /= 10;
    } while(n != 0);
    
    cout << sum << endl;  // OUTSIDE if-block!
    return 0;
}
