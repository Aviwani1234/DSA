#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int n, int s,int e, int key){
    
    int mid=(s+e)/2;
   // cout<<arr[mid]<<" "<<s<<" "<<e<<endl;

    if(arr[mid]==key){
        return 1;
    }

    if(s>=e){
        return 0;
    }

    if(arr[mid]<key){
        s=mid+1;
        
    }
    else{
        e=mid-1;
        
    }

    return binarySearch(arr, 6,s,e,key);
}
 
int main(){

int n=1;
int arr[1]={6};
int s=0;
int e=n-1;

cout<<binarySearch(arr, 1,s,e,6);

 
return 0;
}