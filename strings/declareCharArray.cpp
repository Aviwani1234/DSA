#include<bits/stdc++.h>
using namespace std;

int length(char name[]){
int count=0;
    for(int i=0; name[i]!='\0';i++){
       count++;
    }
    return count;
}

void reverseString(char name[],int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        swap(name[s++],name[e--]);
    }
    cout<<name;   
}

int main(){
    char name[20];

    cout<<"Enter your string : "<<endl;
    cin>>name;
    cout<<"Your string is ";
    cout<<name<<endl;
    
    int k=length(name);
    cout<<"Lenght of string : "<< k<<endl;;
    cout<<"Reverse string is : ";
     reverseString(name,k);
    


    return 0;
}