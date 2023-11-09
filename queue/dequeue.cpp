#include <bits/stdc++.h>
using namespace std;
 
int main(){

deque<int> d;

d.push_front(11);
d.push_back(12);

// cout<<d.front()<<endl;
// cout<<d.back()<<endl;

d.pop_front();

// cout<<d.front()<<endl;
// cout<<d.back()<<endl;

d.pop_back();

if(d.empty())
    cout<<"Empty Queue"<<endl;
else
    cout<<"Non-empty Queue"<<endl;

return 0;
}