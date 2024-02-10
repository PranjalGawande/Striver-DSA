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

    int cnt = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        if (maxi < cnt)
        {
            maxi = cnt;
        }
    }
    cout << maxi;

    return 0;
}