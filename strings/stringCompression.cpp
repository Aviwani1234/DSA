#include<bits/stdc++.h>
using namespace std;

int length(char name[]){
    int count=0;
    for (int i = 0; name[i]!='\0'; i++)
    {
       count++;
    }
    return count;
    
}

string stringCompression(char name[],int n){
    int count=0;
    string temp;
    temp.push_back(name[0]);
    for (int i = 0; i < n; i++)
    {
       
        for (int j = 0; j < n; j++)
        {
           if(name[i]==name[j]){
            count++;
           }
           else{
               break;
           }
        }
        if(name[i]!=temp.back()){
            temp.push_back(name[i]);
         }
        temp.push_back(count);
        count=0;
        }
        return temp;
}



int main(){

char name[20];
cin>>name;

int k=length(name);
cout<<stringCompression(name,k);

    return 0;
}