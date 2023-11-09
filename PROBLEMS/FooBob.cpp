#include <bits/stdc++.h>
using namespace std;
 
int main(){

for(int i=1;i<=100;i++)
{
    if(i%3==0 && i%5!=0)
    {
        cout<<"Foo"<<endl;
    }
    else if(i%5==0 && i%3!=0)
    {
        cout<<"Bob"<<endl;
    }
    else if(i%3==0 && i%5==0)
    {
        cout<<"FooBob"<<endl;
    }
    else{
        cout<<i<<endl;
    }
}
 
return 0;
}