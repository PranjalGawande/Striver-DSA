#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1, arr2;
    for (int i = 0; i < n1; i++) {
        int t;
        cin >> t;
        arr1.push_back(t);
    }
    for (int i = 0; i < n2; i++) {
        int t;
        cin >> t;
        arr2.push_back(t);
    }


    // Brute Force
    // vector<int> ans;
    // vector<int> vis(n2, 0);
    // for (int i = 0; i < n1; i++) {
    //     for (int j = 0; j < n2; j++) {
    //         if (arr1[i] == arr2[j] && vis[j] == 0) {
    //             ans.push_back(arr1[i]);
    //             vis[j] = 1;
    //             break;
    //         }
    //     }
    // }
    // TC: O(n1*n2)
    // SC: O(n2)



    // Optimal -- 2 pointer approach
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            j++;
        }
        else {                          // if both are equal
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }



    for (auto it : ans) {
        cout << it << " ";
    }


    return 0;
}