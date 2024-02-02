#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int l, int r)
{
    if (l >= r)
    {
        return true;
    }
    if (tolower(s[l]) != tolower(s[r]))
    {
        return false;
    }
    return isPalindrome(s, l + 1, r - 1);
}

int main()
{
    string s;
    cout << s << endl;
    auto i = s.begin();
    while (i < s.end())
    {
        *i = tolower(*i);
        if (!isalnum(*i))
        {
            s.erase(i);
            continue;
        }
        i++;
    }
    cout << isPalindrome(s, 0, s.size() - 1);
    return 0;
}