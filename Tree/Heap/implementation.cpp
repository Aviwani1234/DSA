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

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deleteElement()
    {
        if (size == 0)
        {
            cout << "No Tree Exist" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;

            if (leftindex < size && arr[i] < arr[leftindex])
            {
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if (rightindex < size && arr[i] < arr[rightindex])
            {
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            }
            else
            {
                return;
            }
        }
    }

    void heapify(int arr[], int n, int i)
    {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left < n && arr[largest] < arr[left])
            largest = left;

        if (right < n && arr[largest] < arr[right])
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
            swap(arr[n], arr[1]);
            t--;

            heapify(arr, t, 1);
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{

    Heap h;
    h.insert(50);
    h.insert(20);
    h.insert(199);
    h.insert(56);
    h.insert(90);
    h.insert(1);
    h.print();

    h.deleteElement();
    h.print();

    int arr[6] = {-1, 50, 40, 29, 100, 44};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        h.heapify(arr, 5, i);
    }

    h.print();

    h.heapSort(arr, n);
    cout << "printing heap sort" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}