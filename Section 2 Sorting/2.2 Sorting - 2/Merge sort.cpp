#include<bits/stdc++.h>
using namespace std;

vector<int> Merge(vector<int> &arr, int n, int l, int mid, int r) {
    vector<int> temp;
    int left = l;
    int right = mid + 1;
    while (left <= mid && right <= r) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= r) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = l; i <= r; i++) {
        arr[i] = temp[i-l];
    }

}

void mergeSort(vector<int> &arr, int n, int l, int r) {
    if (l >= r) {
        return;
    }
    int mid = (l+r)/2;
    mergeSort(arr, n, l, mid);
    mergeSort(arr, n, mid+1, r);
    Merge(arr, n, l, mid, r);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        arr.push_back(t);
    } 
    mergeSort(arr, n, 0, n-1);

    for (auto it : arr) {
        cout << it << " ";
    }

    return 0;
}