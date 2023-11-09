#include <bits/stdc++.h>
using namespace std;

int sumElement(int arr[], int n){
    int sum=0;

    for (int i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
   return sum; 
}
 
int main(){

int arr[10]={1,3,5,2,6,7,8,9,0,4};
cout<<sumElement(arr,10);

 
return 0;
}