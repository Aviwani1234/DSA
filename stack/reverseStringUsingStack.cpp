#include <bits/stdc++.h>
using namespace std;
 
int main(){

stack<char>s;
string str="abcdeffakadjf";
string ans="";
for(int i=0;i<str.length();i++)
{
    s.push(str[i]);
}
while(s.empty()!=1)
{
    ans.push_back(s.top());
    s.pop();
}
cout<<ans<<endl;
return 0;
}