#include <bits/stdc++.h>
using namespace std;

void rearrange(int *arr, int n)
{

    // Your code here
   /* for(int i=0; i<n; i+=2){
        for(int j=i; j<n; j++){
            swap(arr[j],arr[n-1]);
        }
    }*/
    int i=0;
    int j=i;
    while(i<=n-2){

        if(j<n){
            swap(arr[j],arr[n-1]);
            j++; 
        }
        else{
            i+=2;
            j=i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{

    int n = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    rearrange(arr,n);

    return 0;
}