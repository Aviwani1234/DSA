#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    int index;
    int i, ans;
    string str = "";

    if (needle.length() == 0)
        return 0;

    if (needle.length() > haystack.length())
        return -1;

    for (int i = 0; i < haystack.length(); i++)
    {
        if (needle[0] == haystack[i])
        {
            index = i;
            while (i < haystack.length() && str.length() != needle.length())
            {
                str = str + haystack[i];
                i++;
            }
            if (str == needle)
            {
                ans = index;
            }
            else
            {
                ans = -1;
            }
        }
    }

    return ans;
}

int main()
{

    string s1 = "hello";
    string s2 = "ll";

    cout << strStr(s1, s2);

    return 0;
}


/****** alternative solution **************/

/*  return haystack.find(needle);              // by using inbuilt function  */ 
