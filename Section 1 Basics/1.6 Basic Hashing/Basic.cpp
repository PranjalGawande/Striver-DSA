#include<bits/stdc++.h>
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

    map<int, int> mpp;      // Stores in sorted order
    // unordered_map<int, int> mpp     // stores in unsorder order
    
    for (auto it : arr) {
        // cout << it << endl;
        mpp[it]++;
    }

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}