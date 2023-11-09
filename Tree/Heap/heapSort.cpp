#include <bits/stdc++.h>
using namespace std;

class Heap
{

public:
    int arr[100];
    int size = 0;

    Heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void heapify(int arr[], int n, int i)
    {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && arr[largest] < arr[left])
            largest = left;

        if (right <= n && arr[largest] < arr[right])
            largest = right;

        if (i != largest)
        {
            swap(arr[largest], arr[i]);
            heapify(arr, n, i);
        }
    }

    void heapSort(int arr[], int n)
    {
        int t = n;
        while (t > 1)
        {
            swap(arr[t], arr[1]);
            t--;

            heapify(arr, t, 1);
        }
    }
};

int main()
{
    Heap h;
    int arr[6] = {-1, 50, 40, 29, 100, 44};
    int n = 5;

    for (int i = n / 2; i > 0; i--)
    {
        h.heapify(arr, 5, i);
    }

    h.heapSort(arr, n);
    cout << "printing heap sort" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}