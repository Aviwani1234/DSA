#include <bits/stdc++.h>
using namespace std;

void swapElement(int arr[], int n)
{

    /* int i=0;
     swap(arr[i],arr[i+1]);
     i+=2;
     cout<<arr[i]<<endl;
     cout<<arr[i+1]<<endl;
     swap(arr[i],arr[i+1]);
     i+=2;
     cout<<arr[i]<<endl;
     cout<<arr[i+1]<<endl;
     swap(arr[i],arr[i+1]);*/

    for (int i = 0; i < n - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5};
    swapElement(arr, 5);

    return 0;
}