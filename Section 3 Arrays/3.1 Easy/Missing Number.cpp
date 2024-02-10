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

    // Brute Force
    for (int i = 1; i <= n; i++) {
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << i << endl;
        }
    }
    // TC: O(n^2) => W.C.



    // Better approach
    // using hashing
    unordered_map<int, int> mpp(n+1);
    for (int i = 0; i < n; i++) {
        mpp[arr[i]] = 1;
    }

    for (int i = 1; i <= n; i++) {
        if (mpp[i] == 0) {
            cout << i << endl;
        }
    } 
    // TC: O(2n)
    // SC: O(n)


    // OPTIMAL SOl 1
    // with sum
    int n1 = n+1;
    int sum1 = 0;
    sum1 = (n1*(n1+1))/2;
    int sum2 = 0;
    for (auto it : arr) {
        sum2 += it;
    }
    cout << sum1 - sum2 << endl;
    // TC: O(n)
    // SC: O(1)


    // OPTIMAL SOL 2 -- better than 1
    // using XOR
    int xor2 = 0;                   // xor of array with missing no.
    int xor1 = 0;                   // xor of given array
    for (int i = 0; i < n-1; i++) {
        xor1 = xor1 ^ arr[i];
        xor2 = xor2 ^ (i+1);
    }
    xor2 = xor2 ^ n;
    cout << (xor1 ^ xor2);

    return 0;
}