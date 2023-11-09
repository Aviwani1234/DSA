#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int s, int e, int key){
    int mid=s+(e-s)/2;
   // cout<<mid<<" "<<arr[mid]<<endl;
    if(key==arr[mid]){
        return 1;
    }

    if(s>=e){
        return 0;
    }
  
    if(arr[mid]>key){
     return binarySearch(arr, n, s, mid-1,  key);
    // e=mid-1;
    }
    else{
      return binarySearch(arr, n, mid+1, e,  key); 
      //s=mid+1;
    }
   // return binarySearch(arr, n, s, e, key);

    
}
 
int main(){

int arr[5]={10,11,12,13,14};
int n=5;
int s=0;
int e=n-1;
int key=15;
cout<<binarySearch(arr, n, s, e,key);
 
return 0;
}