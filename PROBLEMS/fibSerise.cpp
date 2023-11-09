#include <bits/stdc++.h>
using namespace std;

int fibNum(int n, int a, int b, int cnt, int sum)
{
    if (n == 1)
        return a;

    if (n == 2)
        return b;

    if (cnt == n)
        return sum;

    sum = a + b;
    cnt++;
    return fibNum(n, b, sum, cnt, sum);
}

int main()
{

    int n = 9, a = 0, b = 1, sum = 0, cnt = 2;
    cout << fibNum(n, a, b, cnt, sum) << endl;

    return 0;
}