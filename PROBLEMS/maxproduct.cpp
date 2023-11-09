#include <bits/stdc++.h>
using namespace std;

int buyMaximunProducts(int n, int k, int price[])
{
    int max = 0;
    int product;
    for (int i = 1; i < n; i++)
    {
        product = k / price[i];

        if (product > max)
        {
            max = product;
        }
    }

    return max;
}

int main()
{

    int n, k;
    cin >> n;
    int i, price[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> price[i];
    }
    cin >> k;
    cout << buyMaximunProducts(n, k, price) << endl;

    return 0;
}