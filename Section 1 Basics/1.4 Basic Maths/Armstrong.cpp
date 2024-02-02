#include<bits/stdc++.h>
using namespace std;

int main () {
    int n = 1634;
    int sum = 0;
    int d = 0;
    int t = n;
    while (t > 0) {
        d++;
        t /= 10;
    }
    t = n;
    while (t > 0) {
        int r = t % 10;
        sum += pow(r, d);
        t /= 10;
    }
    if (sum == n) {
        cout << "TRUE";
    }
    else {
        cout << "FALSE";
    }
    return 0;
}