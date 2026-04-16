// #include<iostream>
// #include<cmath>   // for sqrt()
// using namespace std;

// bool isPrime(int n){
//     if(n == 1) return false;      // 1 is not prime
    
//     for(int i = 2; i <= sqrt(n); i++){
//         if(n % i == 0)
//             return false;         // divisible → not prime
//     }
//     return true;                  // no divisor found → prime
// }

// int main(){
//     int n;
//     cin >> n;
    
//     if(isPrime(n))
//         cout << "Prime";
//     else
//         cout << "Not Prime";
        
//     return 0;
// }



#include<iostream>
#include<cmath>

using namespace std;
bool isprime(int n){
    if (n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
        
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<< "Prime";
    }
    else
    cout<<"Not Prime";
    return 0;


}