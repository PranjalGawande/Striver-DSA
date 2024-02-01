#include <bits/stdc++.h>
using namespace std;


// 2 Variables l and r
// void rev(int n, vector<int> &arr, int l, int r) {
//     if (l >= r) {
//         return ;
//     }
//     swap(arr[l], arr[r]);
//     rev(n, arr, l+1, r-1);
// }


// 1 variable i
void rev(int n, vector<int> &arr, int i) {
    if (i >= n/2) {
        return;
    }
    swap (arr[i], arr[n-i-1]);
    rev (n, arr, i+1);
}

int main () {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        arr.push_back(t);
    }
    rev(n, arr, 0);
    for (auto it : arr) {
        cout << it << " ";
    }
    return 0;
}