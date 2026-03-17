#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    // Top half (increasing)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // j == 1 is the vertical left wall
            // j == i is the slanted right wall
            if (j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Bottom half (decreasing)
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            // Same logic: only print stars at the boundaries
            if (j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
