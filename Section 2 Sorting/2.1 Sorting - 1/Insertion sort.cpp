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

    for (int i = 0; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j-1] > arr[j]) {
                int t = arr[j-1];   
                arr[j-1] = arr[j];
                arr[j] = t;
            }
            else {
                break;
            }
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}