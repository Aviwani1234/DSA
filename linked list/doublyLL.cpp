#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int value)
    {
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "node of value " << value << " deleted" << endl;
    }
};

void inserthead(node *&head, int value)
{
    node *temp = new node(value);
    temp->prev = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void inserttail(node *&tail, int value)
{

    node *temp = new node(value);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertbetween(node *&head, int value, int pos)
{
    node *temp = new node(value);
    node *p = head;
    int cnt = 1;
    while (cnt != pos)
    {
        p = p->next;
        cnt++;
    }
    temp->next = p->next;
    p->next->prev = temp;
    p->next = temp;
    temp->prev = p;
}

void deleteNode(node *&head, node *&tail, int pos)
{
    node *temp = head;
    if (pos == 1)
    {
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        int cnt = 1;
        node *q = NULL;
        while (cnt != pos)
        {
            q = temp;
            temp = temp->next;
            cnt++;
        }
        temp->prev = NULL;
        // temp->next->prev=q;
        q->next = temp->next;
        temp->next = NULL;
        delete temp;
    }
}

void print(node *&head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void length(node *&head)
{
    node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    cout << cnt << endl;
}

int main()
{

    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    // inserthead(head,88);
    // inserthead(head,1);
    // inserthead(head,356);
    // print(head);
    // length(head);

    inserttail(tail, 100);
    inserttail(tail, 101);
    inserttail(tail, 103);
    print(head);

    cout << endl;

    insertbetween(head, 999, 2);
    print(head);

    deleteNode(head, tail, 1);
    print(head);

    return 0;
}