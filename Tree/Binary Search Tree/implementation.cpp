#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertNode(Node *root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = insertNode(root->right, d);
    }
    else
    {
        root->left = insertNode(root->left, d);
    }

    return root;
}

void takeInput(Node *&root)
{
    int d;
    cout << "Enter data : " << endl;
    cin >> d;

    while (d != -1)
    {
        root = insertNode(root, d);
        cin >> d;
    }
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int min(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
        temp = temp->left;

    return temp->data;
}

int max(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
        temp = temp->right;

    return temp->data;
}

Node *deleteNode(Node *root, int val)
{
    if(root == NULL)
        return NULL;

    if(root->data == val)
    {
        if(root -> left == NULL && root -> right == NULL)
        {
            delete root;
            return NULL;
        }
        
    }
    else{

       if(root->data > val)
       {
            root->right = deleteNode(root->right, val);
            return root;
       }
       else{
            root ->left = deleteNode(root->left, val);
            return root;
       }      
    }    
}

int main()
{

    Node *root = NULL;

    takeInput(root);

    // cout << "Level order" << endl;
    // levelOrderTraversal(root);

    // cout << "Inorder" << endl;
    // inorder(root);

    cout << "minimun value : " << min(root) << endl;
    cout << "maximun value : " << max(root) << endl;

    return 0;
}