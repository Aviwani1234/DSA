#include <bits/stdc++.h>
using namespace std;
 
int main(){

queue<int> q;

q.push(11);
q.push(12);
q.push(13);
q.push(14);

cout<<"size of queue is "<<q.size()<<endl;

cout<<"front element of queue is "<<q.front()<<endl;

q.pop();

cout<<"size of queue is "<<q.size()<<endl;

cout<<"front element of queue is "<<q.front()<<endl;

if(q.empty())
    cout<<"Queue is empty"<<endl;
else 
    cout<<"Queue is NOT empty"<<endl;


return 0;
}