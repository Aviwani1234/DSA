#include <bits/stdc++.h>
using namespace std;

// non recursive
void isSorted(int arr[], int n)
{
    bool flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                // cout<<"Array is NOT sorted";
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        cout << "Array is NOT sorted";
    }
    else
    {
        cout << "Array is sorted";
    }
}

// recursive
bool isSortedRec(int arr[], int n)
{

    if (n == 0 || n == 1)
        return true;

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSortedRec(arr + 1, n - 1);
        cout << remainingPart;
        return remainingPart;
    }
}

int main()
{

    int n = 5;
    int arr[5] = {2, 5, 4, 4, 5};

    // isSorted(arr, n);

    bool ans = isSortedRec(arr, n);

    if (ans)
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not sorted";
    }

    return 0;
}