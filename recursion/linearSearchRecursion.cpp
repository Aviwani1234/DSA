#include <bits/stdc++.h>
using namespace std;

int isPresent(int *arr, int n, int k)
{

    if (arr[0] == k)
    {
        return 1;
    }

    if (n == 0)
    {
        return 0;
    }

    return isPresent(arr + 1, n - 1, k);
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    cout << isPresent(arr, 5, 1);

    return 0;
}