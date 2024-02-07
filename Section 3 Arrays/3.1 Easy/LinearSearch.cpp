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
    int num;
    cin >> num;

    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            cout << "Number " << num << " is at index: " << i;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << "NOT FOUND";
    }
    return 0;
}