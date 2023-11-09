#include <bits/stdc++.h>
using namespace std;
/*
int factorial(int n)
{
    if(n==0)
        return 1;

    if(n==1)
        return 1;

    return n*factorial(n-1);
}
*/

int fact(int n)
{
    int ans = 1;
    while (n != 1)
    {
        ans = ans * n;
        n--;
    }
    return ans;
}

// int fibonacci(int a,int b,int &sum, int n)
// {
//     if(n==0)
//         return sum;

//     sum=a+b;
//     a=b;
//     b=sum;
//     n--;
//     fibonacci(a,b,sum,n);

//     return sum;
// }

int fibo(int n)
{
    int a = 1, b = 1;
    int sum = 0;

    if (n == 1 || n == 2)
        return 1;

    n = n - 2;
    while (n != 0)
    {
        sum = a + b;
        a = b;
        b = sum;
        n--;
    }
    return sum;
}

int main()
{

    int num;
    cout << "Enter number: " << endl;
    cin >> num;
    int sum = 0;
    int ans = fibo(num);
    cout << "fib of " << num << " is " << ans << endl;

    return 0;
}