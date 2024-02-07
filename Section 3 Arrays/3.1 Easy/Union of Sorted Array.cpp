#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1;
    vector<int> arr2;
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


    // Brute force
    // set<int> st;
    // for (int i = 0; i < n1; i++) {
    //     st.insert(arr1[i]);
    // }
    // for (int i = 0; i < n2; i++) {
    //     st.insert(arr2[i]);
    // }
    // vector<int> ans(st.size());
    // int i = 0;
    // for (auto it : st) {
    //     ans[i++] = it;
    // }
    // TC: O(n1logn + n2logn) + O(n1 + n2)
    // SC: O(n1 + n2) + O(n1 + n2)



    // Optimal approach -- 2 pointers approach
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (ans.size() == 0 || ans.back() != arr1[i]) {     // ans.size() == 0 IMP
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if (ans.size() == 0 || ans.back() != arr2[j]) {
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (ans.back() != arr1[i]) {
            ans.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2) {
        if (ans.back() != arr2[j]) {
            ans.push_back(arr2[j]);
        }
        j++;        
    }



    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}