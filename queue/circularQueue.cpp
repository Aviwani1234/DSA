#include <bits/stdc++.h>
using namespace std;

class MyCircularQueue
{
    int *arr;
    int k;
    int front;
    int rear;

public:
    MyCircularQueue(int k)
    {
        this->k = k;
        arr = new int[k];
        front = -1;
        rear = -1;
    }

    bool enQueue(int value)
    {
        if ((front == 0 && rear == k - 1) || (rear == (front - 1) % (k - 1)))
        {
            return false;
        }
        if (front == -1)
        {
            rear = 0;
            front = 0;
            arr[rear] = value;
        }
        else if (rear == (k - 1) && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
        return true;
    }

    bool deQueue()
    {
        if (front == -1)
            return false;

        arr[front] = -1;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == k - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return true;
    }

    int Front()
    {
        if (front == -1)
            return -1;
        else
            return arr[front];
    }

    int Rear()
    {
        if (front == -1)
            return -1;
        else
            return arr[rear];
    }

    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if ((front == 0 && rear == k - 1) || (rear == (front - 1) % (k - 1)))
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{

    return 0;
}