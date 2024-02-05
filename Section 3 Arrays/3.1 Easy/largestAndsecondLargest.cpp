#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        arr.push_back(t);
    }

    int maxi = INT_MIN;
    for (auto it : arr) {
        if (maxi < it) {
            maxi = it;
        }
    }
    cout << maxi;
    return 0;
}