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

    int isSorted = 1;
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            isSorted = 0;
            break;
        }
    }
    if (isSorted == 1) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    return 0;
    
}