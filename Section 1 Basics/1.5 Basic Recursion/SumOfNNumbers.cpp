#include<bits/stdc++.h>
using namespace std;

// int sum (int n) {
//     static int s = 0;
//     if (n <= 0) {
//         return s;
//     }
//     s += n;
//     sum(n-1);
//     return s;
// }

// int sum (int n, int & s) {
//     if (n <= 0) {
//         return s;
//     }
//     s += n;
//     sum (n-1, s);
//     return s;
// }

int sum (int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum(n-1);
}


int main() {
    int n, s = 0;
    cin >> n;
    cout << sum(n);
    // sum(n, s);
    // cout << s;
    return 0;
}