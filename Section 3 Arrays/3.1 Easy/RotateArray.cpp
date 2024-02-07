#include <bits/stdc++.h>
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

    // left rotate by 1
    // int temp = arr[0];
    // for (int i = 1; i < n; i++) {
    //     arr[i-1] = arr[i];
    // }
    // arr[n-1] = temp;



    // left rotate by k
    // int k;
    // cin >> k;
    // while (k > 0) {
    //     int temp = arr[0];
    //     for (int i = 1; i < n; i++) {
    //         arr[i-1] = arr[i];
    //     }
    //     arr[n-1] = temp;
    //     k--;
    // }


    // right rotate by k        -- time limit exceeded
    // int k;
    // cin >> k;
    // k = k % n;
    // while (k > 0) {
    //     int temp = arr[n-1];
    //     for (int i = n-1; i > 0; i--) {
    //         arr[i] = arr[i-1];
    //     }
    //     arr[0] = temp;
    //     k--;
    // }

    // left rotate by k             -- IMPORTANT
    // int k;
    // cin >> k;
    // k = k % n;
    // vector<int> temp;
    
    // // put first k elements in temp
    // for (int i = 0; i < k; i++) {
    //     temp.push_back(arr[i]);
    // }

    // // shift remaining elements to left
    // for (int i = k; i < n; i++) {
    //     arr[i-k] = arr[i];
    // }

    // // put temp elements at the end
    // int j = 0;
    // for (int i = n-k; i < n; i++) {
    //     arr[i] = temp[j];
    //     j++;
    // }
    // time complexity - O(n+k)
    // space complexity - O(k)

    // *Important*
    // left rotate by k with no extra space             -- IMPORTANT
    // optimal solution
    int k;
    cin >> k;
    k = k % n;
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
    // time complexity = O(2n)
    // space complexity = O(1)


    // Right rotate by k with no extra space
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());


    for (auto it : arr) {
        cout << it << " ";
    }

    return 0;
}