#include <bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int n, int k)
{
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (k == arr[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Match found";
    }
    else
    {
        cout << "not found";
    }
}

int main()
{

    int arr[10] = {1, 3, 5, 2, 6, 7, 8, 9, 0, 4};

    linearSearch(arr, 10, -7);

    return 0;
}