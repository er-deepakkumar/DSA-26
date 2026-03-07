// #include<iostream>
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     if(n<0){
//         cout<<"-";
//         n=-n;
//     }
//     if(n==0){
//         cout<<0;
//     }
//     while(n!=0){
//         cout<<n%10;
//         n=n/10;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     long long n;
//     cin >> n;
    
//     // Handle negative numbers
//     if (n < 0) {
//         cout << "-";
//         n = -n;
//     }
    
//     do {  // Handles n=0 correctly
//         cout << (n % 10);
//         n /= 10;
//     } while(n != 0);
    
//     cout << endl;
//     return 0;
// }



#include<iostream>
#include<algorithm> 
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    if (n < 0) {
        cout << "-";
        n = -n;
    }
    
    string s = to_string(n);
    reverse(s.begin(), s.end());
    cout << s << endl;
    
    return 0;
}


// | Aspect      | Your Method         | String Method         |
// | ----------- | ------------------- | --------------------- |
// | Time        | O(log₁₀n) divisions | O(log₁₀n) single pass |
// | Space       | O(1)                | O(log₁₀n)             |
// | n=0         | ❌ No output         | ✅ Prints 0            |
// | I/O Calls   | 19× slower          | 1× call               |
// | Overflow    | ✅ Safe              | ✅ Safe                |
// | Readability | Complex math        | Simple                |