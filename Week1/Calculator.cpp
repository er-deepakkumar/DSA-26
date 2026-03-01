// #include<iostream>
// using namespace std;
// int main(){
//     long long n,m;
//     // cin>>n>>m;
//     // cout<<n <<" + "<<m<<" = "<<n+m<<endl;
//     // cout<<n <<" - "<<m<<" = "<<n-m<<endl;
//     // cout<<n <<" * "<<m<<" = "<<n*m<<endl;
//     // cout<<n <<" / "<<m<<" = "<<n/m<<endl;
//     // cout<<n <<" % "<<m<<" = "<<n%m<<endl;
//     cout << n << " + " << m << " = " << n + m << endl << endl;
//     cout << n << " - " << m << " = " << n - m << endl << endl;
//     cout << n << " * " << m << " = " << n * m << endl << endl;
//     cout << n << " / " << m << " = " << n / m << endl << endl;
//     cout << n << " % " << m << " = " << n % m << endl;

// }

#include<iostream>
using namespace std;

int main() {
    long long n, m;
    
    // 1. You must read the input! (Remove the //)
    cin >> n >> m;

    // 2. Keep the double endl for the blank lines the judge wants
    cout << n << " + " << m << " = " << n + m << endl << endl;
    cout << n << " - " << m << " = " << n - m << endl << endl;
    cout << n << " * " << m << " = " << n * m << endl << endl;
    cout << n << " / " << m << " = " << n / m << endl << endl;
    cout << n << " % " << m << " = " << n % m << endl;

    return 0;
}