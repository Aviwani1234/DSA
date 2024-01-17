#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    int bit = pow(2, s.length() - 1), i = 0, ans = 0;

    while (i < s.length())
    {
        if (s[i] == '1')
        {
            ans += bit;
        }
        bit = bit / 2;
        i++;
    }

    cout << ans;
}

int main()
{

    string s = "1011";
    solve(s);

    return 0;
}