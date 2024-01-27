#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 1024300;
    int ans = 0;
    while (n != 0) {
        int r = n % 10;
        ans = ans * 10 + r;
        n /= 10;
    }
    cout << ans;
    return 0;
}