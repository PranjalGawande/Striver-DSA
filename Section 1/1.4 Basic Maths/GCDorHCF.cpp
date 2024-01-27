#include<bits/stdc++.h>
using namespace std;



// int main() {
//     int n1 = 20, n2 = 40;
//     for (int i = min(n1, n2); i >= 1; i--) {
//         if (n1 % i == 0 && n2 % i == 0) {
//             cout << i;
//             break;
//         }
//     }
// }


// Euclidean's Algorithm
int main () {
    int a = 9, b = 6;
    if (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    if (a == 0) {
        cout << b;
    }
    else {
        cout << a;
    }
    return 0;
}