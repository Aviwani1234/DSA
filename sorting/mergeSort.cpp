#include <bits/stdc++.h>
using namespace std;

void merge(int *arr,int s, int e){
     
    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int * first =new int [len1];
    int *second =new int [len2];

    int k=s;
    for(int i=0; i<len1; i++){
        first[i]=arr[k++];
    }

    k=mid+1;
    for(int i=0; i<len2; i++){
        second[i]=arr[k++];
    }

    int i=0;
    int j=0;
    k=s;
    while(i<len1 && j<len2){

        if(first[i]<second[j]){
            arr[k++]=first[i++];    
        }
        else{
             arr[k++]=second[j++];  
        }
        
    }

        while(i<len1){
            arr[k++]=first[i++];
        }
        
         while(j<len2){
            arr[k++]=second[j++];
        }

        
    }



void mergeSort(int *arr, int s, int e){
    
    if(s>=e){
        return ;
    }
    
    int mid=s+(e-s)/2;

    mergeSort(arr,s,mid);

    mergeSort(arr, mid+1,e);

    merge(arr,s,e);
    
}
 
int main(){

int arr[5]={2,31,4,53,1};
int n=5;
int s=0;
int e=n-1;

mergeSort(arr, s ,e);

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
 
return 0;
}