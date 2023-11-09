#include <bits/stdc++.h>
using namespace std;

int maxElement(int arr[], int n){
    int count=0;
     int max=-1;
     for (int i = 0; i < n; i++)
     {
        if(max<arr[i])
            max=arr[i];
     }
   return max;  
}

int minElement(int arr[], int n){
    int min=0;
    for (int i = 0; i < n; i++)
    {
        if(min>arr[i]){
            min=arr[i];
        }
    }
   return min; 
}
 
int main(){

int arr[10]={1,3,5,2,6,7,8,9,0,4};
cout<<maxElement(arr,10)<<endl;
cout<<minElement(arr,10)<<endl;

 
return 0;
}