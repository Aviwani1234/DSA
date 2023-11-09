#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
    int s=0;
    int e=n-1;

    while (s<e)
    {
        swap(arr[s++],arr[e--]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
     
}
 
int main(){

int arr[10]={1,3,5,2,6,7,8,9,0,4};
reverseArray(arr, 10);

 
return 0;
}