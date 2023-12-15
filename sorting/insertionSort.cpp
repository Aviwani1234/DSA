#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int num = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > num)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = num;
    }
}

int main()
{

    int arr[5] = {3, 2, 5, 4, 1};
    insertionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}