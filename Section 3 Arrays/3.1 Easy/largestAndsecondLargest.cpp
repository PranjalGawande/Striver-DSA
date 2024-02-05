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
    int second_max = INT_MIN;
    for (auto it : arr) {
        if (maxi < it) {
            second_max = maxi;
            maxi = it;
        }
        else if (second_max < it && it != maxi) {
            second_max = it;
        }
    }

    cout << maxi << endl;
    cout << second_max << endl;
    return 0;
}