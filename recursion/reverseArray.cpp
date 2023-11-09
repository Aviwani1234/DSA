#include <bits/stdc++.h>
using namespace std;

//non-recursive
void reverseArray(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s++], arr[e--]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

//recursive
void reverseArrayRec(int arr[], int n, int s, int e)
{

    if (s > e)
    {
        return;
    }

    swap(arr[s++], arr[e--]);

    return reverseArrayRec(arr, n, s, e);
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int s = 0;
    int e = n - 1;

    // reverseArray(arr,n);
    
    reverseArrayRec(arr, n, s, e);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}