#include <bits/stdc++.h>
using namespace std;

// To count all digits another method
int count(int n) {
    int cnt = (int) (log10(n) + 1);
    return cnt;
}


// Find the number of digits of ‘n’ that evenly divide ‘n’.
int main () {
    int n = 435;
    int t = n;
    int cnt = 0;
    while (t != 0) {
        int r = t % 10;
        if (n % r == 0 && r != 0) {
            cnt++;
        }
        // cnt++;       // to count total no. of digits
        t = t/10;
    }
    cout << cnt;
    // cout << count(n);    // function call
    return 0;
}