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

    
    for (int i = 0; i < n-1; i++)
    {
        int mini = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int t = arr[i];
        arr[i] = arr[mini];
        arr[mini] = t;
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}