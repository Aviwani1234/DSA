#include <bits/stdc++.h>
using namespace std;

int fibNum(int n, int a, int b, int c, int cnt, int sum)
{
    if (n == 1)
        return a;

    if (n == 2)
        return b;

    // if (n == 3)
    //     return c;

    if (cnt == n)
        return sum;

    sum = a + b + c;
    a = b;
    b = c;
    c = sum;
    cnt++;
    return fibNum(n, a, b, c, cnt, sum);
}

int main()
{

    int n = 3, a = 0, b = 1, c = 1, sum = 0, cnt = 2;

    /* while(n--)
     {
     sum = a + b+c;
     a=b;
     b=c;
     c=sum;
     }

     cout<<sum<<endl;*/

    cout << fibNum(n, a, b, c, cnt, sum) << endl;

    return 0;
}