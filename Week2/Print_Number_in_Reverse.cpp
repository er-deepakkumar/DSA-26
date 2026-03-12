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



// #include<iostream>
// #include<algorithm> 
// using namespace std;

// int main() {
//     long long n;
//     cin >> n;
    
//     if (n == 0) {
//         cout << 0 << endl;
//         return 0;
//     }
    
//     if (n < 0) {
//         cout << "-";
//         n = -n;
//     }
    
//     string s = to_string(n);
//     reverse(s.begin(), s.end());
//     cout << s << endl;
    
//     return 0;
// }


// | Aspect      | Your Method         | String Method         |
// | ----------- | ------------------- | --------------------- |
// | Time        | O(log₁₀n) divisions | O(log₁₀n) single pass |
// | Space       | O(1)                | O(log₁₀n)             |
// | n=0         | ❌ No output         | ✅ Prints 0            |
// | I/O Calls   | 19× slower          | 1× call               |
// | Overflow    | ✅ Safe              | ✅ Safe                |
// | Readability | Complex math        | Simple                |


#include <iostream>
#include <string>
#include <algorithm> // Needed for reverse()

using namespace std;

int main() {
    string s;
    
    // Read the input as text (string)
    if (!(cin >> s)) return 0;

    // 1. Handle the negative sign separately
    if (s[0] == '-') {
        cout << "-";
        // Remove the '-' so we only reverse the digits
        s.erase(0, 1); 
    }

    // 2. Reverse the characters (this keeps 120 as 021)
    reverse(s.begin(), s.end());

    // 3. Print the reversed string
    cout << s << endl;

    return 0;
}


















// #include <iostream>
// using namespace std;

// int main() {
//     long long num, rev = 0;
    
//     // Read input (works for -10^18 to 10^18)
//     if (!(cin >> num)) return 0;

//     // The logic: 
//     // 1. Get last digit with % 10
//     // 2. Shift rev left (multiply by 10) and add the digit
//     // 3. Remove last digit from num with / 10
//     while (num != 0) {
//         rev = (rev * 10) + (num % 10);
//         num /= 10;
//     }

//     cout << rev << endl;

//     return 0;
// }