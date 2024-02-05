#include <bits/stdc++.h>
using namespace std;

// given sorted array
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }

    // Brute Force - using set
    // set<int> st;
    // for (auto it : arr)
    // {
    //     st.insert(it); // nlogn
    // }

    // int i = 0;
    // for (auto it : st)
    // {
    //     arr[i] = it;
    //     i++;
    // }
    // cout << st.size() << endl;

    
    // 2 pointer approach
    // vector<int> ans;
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }

    for (int it = 0; it <= i; it++) {
        cout << arr[it] << " ";
    }
    // for (auto it : arr)
    // {
    //     cout << it << " ";
    // }
}