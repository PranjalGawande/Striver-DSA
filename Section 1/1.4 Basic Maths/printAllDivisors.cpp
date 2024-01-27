#include <bits/stdc++.h>
using namespace std;


// PRINT all divisors
void printALLDivisors (int n) {
    vector<int> ans;
    for (int i = 1; i*i <= n; i++) {        // O(sqrt(n))
        if (n % i == 0) {
            ans.push_back(i);
            if ((n/i) != i) {
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(), ans.end());           // O(n.log n)
    for (auto it : ans) {
        cout << it << " ";
    }
}




// find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to 5. 
// ‘sumOfDivisors(1)’ = 1
// ‘sumOfDivisors(2)’ = 2 + 1 = 3
// ‘sumOfDivisors(3)’ = 3 + 1 = 4
// ‘sumOfDivisors(4)’ = 4 + 2 +1 = 7 
// ‘sumOfDivisors(5)’ = 5 + 1 = 6
// Therefore our answer is sumOfDivisors(1) + 
// sumOfDivisors(2) + sumOfDivisors(3) + 
// sumOfDivisors(4) + sumOfDivisors(5) = 1 + 3 + 4 + 7 + 6 = 21.

int sumOfDivisors (int n) {
    int sum = 0;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j*j <= i; j++) {
    //         if (i % j == 0) {
    //             sum += j;
    //             if ((i/j) != j) {
    //                 sum += (i/j);
    //             }
    //         }
    //     }
    // }

    // Optimized
    for (int i = 1; i <= n; i++) {
        sum += (n/i) * i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    // printALLDivisors(n);
    cout << sumOfDivisors(n);
    return 0;
}