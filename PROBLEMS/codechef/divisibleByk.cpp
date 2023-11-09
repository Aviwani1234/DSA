#include <bits/stdc++.h>
using namespace std;

bool product(int *arr, int n,int prod, int i,int k)
{
    
    if(n==0)
    {
        return false; 
    }

    prod=prod*arr[i];
    if(prod%k==0)
    {
        return true;
    }
    else{
        n--;
        i++;
        product(arr,n,prod,i,k);
    }
    return false;
}
int main(){
int prod=24;
int i=0;
int n=4;
int k=3;
int arr[4]={1,2,1,1};
cout<<product(arr,n,prod,i,k);
 
return 0;
}