#include <bits/stdc++.h>
using namespace std;

// * * *
// * *
// *
void seeding(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// 1 2 3
// 1 2
// 1
void nNumberTriangle(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

//   *
//  ***
// *****
void nStarTriangleF(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// *****
//  ***
//   *
void nStarTriangleR(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

//   *
//  ***
// *****
// *****
//  ***
//   *
void nStarDiamond(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}




// *
// **
// ***
// **
// *
void nStarTriangle(int n) {
    for (int i = 1; i <= 2*n-1; i++) {
        int stars = i;
        if (i > n) {
            stars = 2*n-i;
        }
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


// 1
// 0 1
// 1 0 1
void nBinaryTriangle(int n) {
    int start;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            start = 1;
        }
        else {
            start = 0;
        }
        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}



//     A
//   A B A
// A B C B A
void alphaHill(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << ch;
            if (j >= i) {
                ch--;
            }
            else {
                ch++;
            }
        }
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}



// * * * * * * 
// * *     * * 
// *         * 
// *         * 
// * *     * * 
// * * * * * * 
void symmetry1(int n) {
    int space = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }
    space -= 2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        space -= 2;
        cout << endl;
    }
}



// *         *
// * *     * *
// * * * * * *
// * *     * *
// *         *
void symmetry(int n) {
    int space = 2*n-2;
    for (int i = 1; i <= 2*n-1; i++) {
        int stars = i;
        if (i > n) {
            stars = 2*n-i;
        }
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
        if (i >= n) {
            space += 2;
        }
        else {
            space -= 2;
        }
    }
}



// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
void getNumberPattern(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int right = (2*n-2) - j;
            int bottom = (2*n-2) - i;
            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    } 
}

int main()
{
    int n;
    cin >> n;
    getNumberPattern(n);
}