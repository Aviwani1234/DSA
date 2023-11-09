#include <bits/stdc++.h>
using namespace std;
 
int main(){

int row;
cout<<"Enter row: ";
cin>>row;
int *col = new int[row];

cout<<"Enter the size of each row : "<<endl;
for (int i = 0; i < row; i++)
{
  cin>>col[i];
}


int ** arr = new int*[row];            //declaration

for(int i=0; i<row; i++){
    arr[i] = new int[col[i]];
}

for(int i=0; i<row; i++){
    cout<<"Enter "<<col[i]<<" element in " <<i<<" row : "<<endl;
    for(int j=0; j<col[i]; j++){
        cin>>arr[i][j];
    }
}

cout<<"Your JAGGERED ARRAY is: "<<endl;
for(int i=0; i<row; i++){               //printing output
    for(int j=0; j<col[i]; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

for(int i=0; i<row; i++){             //free memory 
    delete [] arr[i];
}

delete []arr;

return 0;
}