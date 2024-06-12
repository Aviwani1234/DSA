#include <bits/stdc++.h>
using namespace std;
 
int main(){

int n; cin>>n;
int arr[n];
for(int i=0;i<n;i++) {
    cin>>arr[i];
}

for(int i=0;i<n;i++){
    int num = arr[i];
    int j=i-1;
    while(j>=0) {
        if(arr[j]>num){
            arr[j+1] = arr[j];
        }
        else{
            break;
        }
        j--;
    }
    arr[j+1] = num;
}

for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
}
 
return 0;
}