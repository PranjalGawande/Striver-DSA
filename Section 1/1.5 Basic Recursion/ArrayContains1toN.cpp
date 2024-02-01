#include<bits/stdc++.h>
using namespace std;


//  1 to N
vector<int> rec(int n) {
    vector<int> ans;
    if (n == 0) {
        return ans;
    }
    ans = rec (n-1);
    ans.push_back(n);
    return ans;
}


// N to 1
void dec(int n, vector<int>& ans) {
    if (n <= 0) {
        return;
    }
    ans.push_back(n);
    dec(n-1, ans);
    return;
}

int main() {
    int n;
    cin >> n;
    vector<int> ans;
    dec(n, ans);
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}