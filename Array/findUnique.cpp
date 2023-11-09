#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n){
     
   /* int count=0;
    int req=2;
    int element;
    
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
         if(count<req)
                element=arr[i];

        count=0;
    }

    return element;*/


    int ans=0;
    for (int i = 0; i < n; i++)
    {
       ans=ans^arr[i];
    }
    
    return ans;
}
 
int main(){

int arr[7]={7,1,3,2,7,1,3};
cout<<findUnique(arr,7);
 
return 0;
}