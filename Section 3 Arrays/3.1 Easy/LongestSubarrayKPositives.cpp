#include<bits/stdc++.h>
using namespace std;


// for only positives numbers
int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n ; i++) {
        int t;
        cin >> t;
        arr.push_back(t);
    }
    int k;
    cin >> k;


    // Brute force
    int len = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            if (sum == k) {
                len = max(len, j-i+1);
            }
        }
    }
    cout << len << endl;
    // TC: O(n^3)
    // SC: O(1)


    // Brute force with 2 loops
    len = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == k) {
                len = max(len, j-i+1);
            }
        }
    }
    cout << len << endl;
    // TC: O(n^2)
    // SC: O(1)



    // Better approach with hashing
    // Optimal for LongestSubbaryK with positives+negatives
    int maxlen = 0;
    int sum = 0;
    map<int, int> preSumMap;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == k) {
            maxlen  = max(maxlen, i+1);
        }

        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxlen = max(maxlen, len);
        }
        if (preSumMap.find(sum) ==  preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    cout << maxlen << endl;
    // TC: O(n^logn)
    // SC: O(n)


    // Optimal with 2 pointer approach
    sum = arr[0];
    maxlen = 0;
    int left = 0, right = 0;
    while (right < n) {
        while (sum > k && left <= right) {
            sum -= arr[left];
            left++;
        }
        if (sum == k) {
            maxlen = max(maxlen, right-left+1);
        }
        right++;
        if (right < n) {
            sum += arr[right];
        }
    }
    cout << maxlen << endl;


    return 0;
}