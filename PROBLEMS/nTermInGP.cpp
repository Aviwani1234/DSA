#include <bits/stdc++.h>
using namespace std;
 
int main(){

int t1, t2, n;
cin>>t1>>t2>>n;
int prod = 1;
n = n-1;

while(n--)
    prod = prod * (t2/t1);

cout<<prod;

 
return 0;
}