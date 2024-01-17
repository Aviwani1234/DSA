#include <bits/stdc++.h>
using namespace std;

void solve(char ch, int k, char *arr)
{

    int num = (ch - 'a') + k;
    if (num > 26)
    {
        int index = num % 25;
        cout << arr[index] << endl;
    }
    else
    {
        cout << arr[num - 'a'] << endl;
    }
}

int main()
{

    char ch;
    cin >> ch;
    int k;
    cin >> k;

    char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    solve(ch, k, arr);

    return 0;
}