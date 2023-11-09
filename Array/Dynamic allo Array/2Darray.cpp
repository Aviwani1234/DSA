#include <bits/stdc++.h>
using namespace std;
 
int main(){

int n;
cin>>n;

int ** arr = new int*[n];            //declaration

for(int i=0; i<n; i++){              
    arr[i] = new int[n];
}

for(int i=0; i<n; i++){               //taking input
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
}

for(int i=0; i<n; i++){               //printing output
    for(int j=0; j<n; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

for(int i=0; i<n; i++){             //free memory 
    delete [] arr[i];
}

delete []arr;
 
return 0;
}