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

    
    // Better Sol
    // using Hashing
    unordered_map<int, int> mpp;
    for (auto it : arr) {
        mpp[it]++;
    }
    for (auto it : mpp) {
        if (it.second == 1) {
            cout << it.first << endl;
            break;
        }
    }
    // TC: O(NlogM) + O(M), where M = N/2+1
    // SC: O(M)



    // Optimal sol
    // Using XOR
    int XOR = 0;
    for (auto it : arr) {
        XOR = XOR ^ it;
    }
    cout << XOR << endl;
    // TC = O(n)
    // SC = O(1)



    // IF array given is sorted
    sort(arr.begin(), arr.end());   // just to simulate sorted array
    int ans;
    for (int i = 0; i < n; i += 2) {
        if (arr[i] != arr[i+1]) {
            ans = arr[i];
            break;
        }
    }
    cout << ans;


    return 0;
}