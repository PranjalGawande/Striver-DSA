#include<bits/stdc++.h>
using namespace std;

vector<int> rec(int n) {
    vector<int> ans;
    if (n == 0) {
        return ans;
    }
    ans = rec (n-1);
    ans.push_back(n);
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> ans = rec(n);
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}