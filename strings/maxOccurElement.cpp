#include <bits/stdc++.h>
using namespace std;

int length(char name[]){
int count=0;
    for(int i=0; name[i]!='\0';i++){
       count++;
    }
    return count;
}

char maxOccuring(char name[], int n){
    int count=0;
    int max=0;
    char e;
    int i,j;
    for ( i = 0; i < n; i++)           
    {
       for ( j = 0; j < n; j++)
       {
         if(name[i]==name[j]){
            count++;
         }
       }
       if(max<count){
        max=count;
       // count=0;    
        e=name[i];
       }
    
       count=0;
    }
    cout<<max<<endl;
    return e;
}


int main(){
    char name[20];

    cout<<"Enter your string : "<<endl;
    cin>>name;
    
    int k=length(name);
    cout<<maxOccuring(name, k);
    
    
    


    return 0;
}