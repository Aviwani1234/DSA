#include <bits/stdc++.h>
using namespace std;

int sum(int x, int y)
{
    int c=x+y;
    return c;
}

void swapInt(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main(){

int a=8,b=9;
//cout<<sum(a,b);
swapInt(a,b);
cout<<a<<" "<<b;
 
return 0;
}