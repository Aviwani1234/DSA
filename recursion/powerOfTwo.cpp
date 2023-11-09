#include <bits/stdc++.h>
using namespace std;

int powerOfTwo(int n){

    if(n==0)
       return 1;
    
    int ans=2*powerOfTwo(n-1);
    return ans;
}
 
int main(){

int n;
cin>>n;

cout<<powerOfTwo(n);
 
return 0;
}