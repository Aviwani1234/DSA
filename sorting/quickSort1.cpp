#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivote = arr[s];

    int count=0;
    for(int i=s; i<=e; i++)
    {
        if(arr[i]<pivote)
        {
            count++;
        }
    }

    swap(arr[s], arr[s+count]);

    int i=s, j=e;
    while(i<s+count && j>s+count)
    {
        while(arr[i]<pivote && i<s+count)
        {
            i++;
        }

        while(arr[j]>=pivote && j>s+count)
        {
            j--;
        }

        swap(arr[i], arr[j]);
    }

    return s + count;
}

void quickSort(int *arr, int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);

    quickSort(arr, p+1, e);
}

int main()
{
    int arr[5] = {3,5,1,4,2};
    quickSort(arr, 0, 4);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}