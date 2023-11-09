#include <bits/stdc++.h>
using namespace std;

int length(char name[]){
int count=0;
    for(int i=0; name[i]!='\0';i++){
       count++;
    }
    return count;
}

char stringLower(char ch, int n){
     for (int i = 0; i < n; i++)
     {
       if(ch>='a' && ch<='z'){
           return ch;
       }
       else{
          ch= ch-'A'+'a'; 
       }
     }
     return ch;
}

void stringPalindrome(string s)
{
    string s1 = s;
    int i = 0;
    int e = s.length() - 1;

    while (i < e)
    {
        swap(s[i++], s[e--]);
    }

    if (s == s1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

bool inplaceStrPal(char name[], int n)
{
    int i = 0;
    int e = n - 1;

    while (i <= e)
    {
        if (name[i] != name[e])
        {
            return 0;
        }
        else
        {
            i++;
            e--;
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
    cout<<"Lenght of string : "<< k<<endl;

    cout<<inplaceStrPal( name,  k)<<endl;

    cout<<"A : "<<stringLower('A',k);
    return 0;
}