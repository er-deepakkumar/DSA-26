// #include<iostream>
// using namespace std;
// int main(){
//     long number;
//     long long integer[number];
//     cin>>number;
//     for(int i=0;i<number;i++){
//         cin>>integer[i];
//     }
//     for(int i=0;i<number;i++){
//         cout<<integer[i]<<" ";
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     long number;
//     long long positive,negitive,even,odd;

//     cin>>number;
//     for(long i=0;i<number;i++){
//         long x;
//         cin>>x;
//         if (x>0) positive ++;
//         if(x<0) negitive ++;
//         if(x%2==0) even++;
//         else odd++;
//     }
//     cout<<positive<<endl;
//     cout<<negitive<<endl;
//     cout<<even<<endl;
//     cout<<odd<<endl;
    
// }
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int pos = 0, neg = 0, even = 0, odd = 0;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x > 0) pos++;
        if(x < 0) neg++;

        if(x % 2 == 0) even++;
        else odd++;
    }

    cout << pos << endl;
    cout << neg << endl;
    cout << even << endl;
    cout << odd << endl;

    return 0;
}

