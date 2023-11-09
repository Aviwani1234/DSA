#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

void insertNode(node *&head, int value, int pos)
{
    if (pos == 1)
    {
        node *temp = new node(value);
        temp->next = head;
        head = temp;
    }
}

// void reverseLL(node *&head)
// {
//     node*curr=head;
//     node*p=NULL;
//     node*forward;
//     while(curr!=NULL){
//         forward=curr->next;
//         curr->next=p;
//         p=curr;
//         curr=forward;
//     }
//     head=p;
// }

/*node *reverseByRec(node *&head)
{
    node *curr = head;
    node *p = NULL;
    node *forward;

    if (curr != NULL)
    {
        return p;
    }

    forward = curr->next;
    curr->next = p;
    p = curr;
    curr = forward;
}*/

void reverse(node*&head)
{
    node *curr=head;
    node*p=NULL;
    node*forward;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=p;
        p=curr;
        curr=forward;
    }
    head=p;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    node *node1 = new node(10);
    node *head = node1;

    insertNode(head, 9, 1);
    insertNode(head, 8, 1);
    insertNode(head, 7, 1);
    insertNode(head, 6, 1);
    print(head);
    cout<<endl;
    reverse(head);
    print(head);

    return 0;
}