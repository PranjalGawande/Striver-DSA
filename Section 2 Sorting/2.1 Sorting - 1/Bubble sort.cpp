#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }

    for (int i = n-1; i >= 1; i--) {
        int didswap = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                didswap = 1;
            }
        }
        if (didswap == 0) {
            break;
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}