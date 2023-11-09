#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int n, int sum)
{

    if (n == 0)
        return sum;

    sum = sum + arr[0];

    return getSum(arr + 1, n - 1, sum);
}

int main()
{

    int n = 5, sum = 0;
    int arr[5] = {2, 2, 3, 6, 5};
    cout << getSum(arr, n, sum);

    return 0;
}