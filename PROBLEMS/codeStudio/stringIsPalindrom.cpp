#include <bits/stdc++.h>
using namespace std;

int length(char name[]){
int count=0;
    for(int i=0; name[i]!='\0';i++){
       count++;
    }
    return count;
}

char stringLower(char ch){
       if(ch>='a' && ch<='z'){
           return ch;
       }
       else{
          char temp= ch-'A'+'a'; 
          return temp;
       }
  
}

bool inplaceStrPal(char name[], int n)
{
    int i = 0;
    int e = n - 1;

    while (i <= e)
    {
        if (isalnum(stringLower(name[i])) != isalnum(stringLower(name[e])))
        {
            return 0;
        }
        else
        {
            if(isalnum(name[i])){
            i++;
            }
            else{
                i+=2;
            }

            if(isalnum(name[e])){
            e--;
            }
            else{
                e-=2;
            }
        }
    }
    return 1;
}

int main()
{

    char name[20];

    cout<<"Enter your string : "<<endl;
    cin>>name;
    cout<<"Your string is ";
    cout<<name<<endl;
    
    int k=length(name);
   // cout<<"Lenght of string : "<< k<<endl;

    cout<<inplaceStrPal( name,  k)<<endl;

   // cout<<"A : "<<stringLower('A');
    return 0;
}