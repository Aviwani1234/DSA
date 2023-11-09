#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

bool prime[n+1];
for (int i = 2; i < n; i++)
{
 prime[i]=1;
}

prime[0]=prime[1]=false;

int count=0;
for (int i = 2; i < n; i++)
{
    if(prime[i]==true){
     count++;
    }

    for (int j = 2*i; j < n; j=j+i)
    {
       prime[j]=false;
    }
    
}
cout<<count;

    return 0;
}