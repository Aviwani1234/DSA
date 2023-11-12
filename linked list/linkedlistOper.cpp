#include <bits/stdc++.h>
using namespace std;

// creating Node
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

// initially creating a linked list
void createLL(Node *&head, Node *&tail, int value)
{
    Node *p = new Node(value);
    tail->next = p;
    tail = p;
}

// inserting Node in given LinkedList
void insert(Node *&head, Node *&tail, int pos, int value)
{
    if (pos == 1) // insert Node before head
    {
        Node *p = new Node(value);
        p->next = head;
        head = p;
    }
    else
    { // inserting Node in between ll or at the last of linkedlist
        int cnt = 1;
        Node *prev = NULL;
        Node *temp = head;
        while (cnt != pos)
        {
            prev = temp;
            temp = temp->next;
            cnt++;
        }
        Node *p = new Node(value);
        prev->next = p;
        p->next = temp;
    }
}

// Deleting Node from given linkedlist
void deleteNode(Node *&head, Node *&tail, int pos)
{
    if (pos == 1) // deleting first node
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    { // deleting node in between linkedlist
        int cnt = 1;
        Node *curr = head;
        Node *prev = NULL;
        while (cnt != pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// reverse linked list
Node *reverseLL(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

// length of linkedlist
int lengthLL(Node *&head)
{
    int cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

// printing linked list
void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    Node *n = new Node(10);
    Node *head = n;
    Node *tail = head;

    createLL(head, tail, 20);
    createLL(head, tail, 30);
    createLL(head, tail, 40);
    createLL(head, tail, 50);
    // insert(head, tail, 1, 999);
    //  insert(head, tail, 3, 888);
    // insert(head, tail, 6, 777);
    printLL(head);
    // deleteNode(head, tail, 1);
    // deleteNode(head, tail, 2);
    // deleteNode(head, tail, 5);
    // Node* temp = reverseLL(head);
    cout << endl;
    // printLL(temp);
    cout << lengthLL(head);

    return 0;
}