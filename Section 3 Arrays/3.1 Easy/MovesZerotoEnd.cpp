#include <bits/stdc++.h>
using namespace std;

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

    // brute force
    // int cnt = 0;
    // vector<int> ans;
    // for (int i = 0; i < n; i++) {
    //     if (arr[i] != 0) {
    //         ans.push_back(arr[i]);
    //     }
    // }
    // for (int i = 0; i < ans.size(); i++) {
    //     arr[i] = ans[i];
    // }

    // for (int i = ans.size(); i < n; i++) {
    //     arr[i] = 0;
    // }
    // tc : O(n) + O(n-x) + O(x) => O(2n)
    // sc : O(n)

    // Optimal approach - two pointer
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        cout << "NO ZERO FOUND" << endl;
        return 0;
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}