#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

void insert(Node* &head, Node* &tail, int val)
{
   // cout<<"Hii";
    if(head==NULL)
    {
        Node* p = new Node(val);
        head=p;
        tail=p;
    }
    else
    {
        Node* p = new Node(val);
        tail->next=p;
        tail=p;
    }
}

void print(Node* &head)
{
    //cout<<head->data;
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){

Node* n = new Node(10);
Node* head = n;
Node* tail= head;

insert(head, tail, 20);
insert(head, tail, 30);
insert(head, tail, 40);
print(head);

 
return 0;
}