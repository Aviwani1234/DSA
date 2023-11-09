#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int value){
        this->data=value;
        this->next=NULL;
    }

    ~node(){
        int value=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"node of data "<<value<<" deleted"<<endl;
    }
};

void insertNode(node *&tail, int refelement, int value)
{
    if(tail==NULL)
    {
        node*temp = new node(value);
        tail=temp;
        temp->next=temp;
    }
    else{

        node*curr =tail;
        while (curr->data!=refelement)
        {
            curr=curr->next;
        }
        node*temp = new node(value);
        temp->next=curr->next;
        curr->next=temp;     
    }
}

void deleteNode(node*&tail, int refelement){

   if(tail=NULL){
    cout<<"list is empty";
    return;
   }
   else{
    node*p=tail;
    node*curr=p->next;
    while (curr->data!=refelement)
    {
        p=curr;
       curr=curr->next;   
    }
   p->next=curr->next;
   if(tail == curr){
    tail = p;
   }
   curr->next=NULL;
   delete curr;
   }  
}

void print(node*tail){
    node*temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;

    } while (tail!=temp);
    
}

int main(){

node*tail =NULL;

insertNode(tail,5,3);
insertNode(tail,3,5);
insertNode(tail,5,7);
insertNode(tail,7,9);
insertNode(tail,3,19);
print(tail);

deleteNode(tail,7);
print(tail);

return 0;
}