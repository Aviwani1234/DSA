#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for " << value << endl;
    }
};

void insert(node *&head, int value)
{

    node *temp = new node(value);
    // temp->data=value;
    temp->next = head;
    head = temp;
}

void insertEnd(node *&tail, int value)
{

    node *temp = new node(value);
    tail->next = temp;
    tail = temp;
}

void insertbetween(node *&head, int value, int pos)
{
    node *temp = new node(value);
    int cnt = 1;
    node *p = head;
    while (cnt != pos)
    {
        p = p->next;
        cnt++; // 1   2    3   4
    }
    temp->next = p->next;
    p->next = temp;
}

void deleteHead(node *&head)
{
    node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}

void deletebetween(node *&head, int pos)
{
    node *temp = head;
    node *p = NULL;
    int cnt = 1;
    while (cnt != pos)
    {
        p = temp;
        temp = temp->next;
        cnt++;
    }
    p->next = temp->next;
    temp->next = NULL;
    delete temp;
}

void print(node *&head)
{

    node *p;
    p = head;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

int main()
{

    node *node1 = new node(10);
    // cout<<node1->data<<endl;

    node *head = node1;
    node *tail = node1;

    // insert(head,4);
    // insert(head,41);
    // insert(head,14);
    // print(head);

    insertEnd(tail, 20);
    insertEnd(tail, 30);
    insertEnd(tail, 40);
    // print(head);
    insertbetween(head, 100, 2);

    // deleteHead(head);
    // print(head);

    deletebetween(head, 5);
    print(head);

    return 0;
}