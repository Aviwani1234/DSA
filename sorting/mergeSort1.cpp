#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end)
{
    int mid = (start + end)/2;

    int len1 = mid-start+1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k=start;
    for(int i=0;i<len1;i++)
    {
        first[i] = arr[k++];
    }

    k = mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i] = arr[k++];
    }

    int l=0, m=0;
    k=start;
    while(l<len1 && m<len2)
    {
        if(first[l]<second[m])
        {
            arr[k++] = first[l++];
        }
        else{
            arr[k++] = second[m++];
        }
    }

    while(l<len1)
    {
        arr[k++] = first[l++];
    }

    while (m<len2)
    {
        arr[k++] = second[m++];
    }
    
}

void mergeSort(int arr[],int start, int end)
{
    if(start>=end)
    {
        return;
    }   

    int mid = (start + end)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);

    merge(arr, start, end);
}

int main(){

int arr[5] = {2,4,1,5,3};
mergeSort(arr,0,4);

for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}
 
return 0;
}