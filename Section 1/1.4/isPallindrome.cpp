#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    int t = x;
    int n = 0;
    while (t > 0)
    {
        n = (n * 10) + (t % 10);
        t /= 10;
    }
    return n == x;
}

int main() {
    int x;
    cin >> x;
    cout << isPalindrome(x);
    return 0;
}