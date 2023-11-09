#include <bits/stdc++.h>
using namespace std;

string isReverseString(string s,int k)
{
    int n = s.length();
    int init = 0;
    int end = k-1;

    while (init < end)
    {
        swap(s[init++], s[end--]);
        // cout<<s;
        init++;
        cout<<init<<endl;
        
    }

    return s;
}

int main()
{

    string s = "abcdefg";
    int k=2;
    cout << isReverseString(s,k);

    return 0;
}