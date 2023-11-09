#include <bits/stdc++.h>
using namespace std;

class TrieNode{
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data=ch;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isTerminal = false;
    }
};

class Trie{
public:
    TrieNode* root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0]-'A';
        TrieNode*child;

        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertTrie(string word){
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0]-'A';
        TrieNode*child;

        if(root->children[index]!=NULL)
        {
            child = root->children[index];
        }
        else{
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool searchNode(string word)
    {
        return searchUtil(root, word);
    }

    void removeUtil(TrieNode* root, string word)
    {
        if(word.length() == 0 /*&& root->isTerminal = true*/)
        {
            root->isTerminal = false;
            return;
        }

        int index = word[0]-'A';
        TrieNode* child;

        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        return removeUtil(child, word.substr(1));
    }

    void removeWord(string word)
    {
        return removeUtil(root, word);
    }
};

int main(){

Trie* T = new Trie();

T->insertTrie("ABCD");
cout<<"Present or Not : "<<T->searchNode("ABCD")<<endl;
T->removeWord("ABCD");
cout<<"Present or Not : "<<T->searchNode("ABCD")<<endl;

return 0;
}