#include <bits/stdc++.h>
using namespace std;

class Graph{
public:
    unordered_map<int, list<int>> adj;

    void insert(int u, int v, bool dir)
    {
        adj[u].push_back(v);

        if(dir==0)
        {
            adj[v].push_back(v);
        }
    }

    void printList()
    {
        for(auto i:adj)
        {
            cout<<i.first<<"-> ";
            for(auto j:i.second)
            {
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};
 
int main(){

Graph g;

int n;
cin>>n;

int m;
cin>>m;

for(int i=0;i<m;i++)
{
    int u,v;
    cin>>u>>v;
    g.insert(u,v,0);
}

g.printList();

 
return 0;
}