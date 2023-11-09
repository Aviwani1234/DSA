#include <bits/stdc++.h>
using namespace std;

int euclidsAlgo(int a, int b)
{

    while (a != b)
    {
        if (a == 0)
            return b;

        if (b == 0)
            return a;

        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main()
{

    int a = 10;
    int b = 5;

    cout << euclidsAlgo(a, b);

    return 0;
}