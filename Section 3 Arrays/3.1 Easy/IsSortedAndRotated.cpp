#include<bits/stdc++.h>
using namespace std;


// if the array is rotated the it must have only 1 false condition
int main() {
    int n; 
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        arr.push_back(t);
    }

    int count = 0;
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            count++;
        }
    }
    // Check for the last and first element
    if (arr[0] < arr[n-1]) {
        count++;
    }
    if (count <= 1) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    return 0;
    
}