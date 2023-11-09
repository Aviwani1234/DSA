#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int count = 1;
    bool flag = 0;
    for (int i = 3; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count++;
        }
        flag = 0;
    }
    cout << count;

    return 0;
}