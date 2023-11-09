#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string str, int s, int e){

    if(str[s]!=str[e]){
        return 1;
    }

    if(s>=e){
        return 0;
    }
    
    s++;
    e--;
    return isPalindrome(str, s,e);
}
 
int main(){

string str;
cin>>str;

int s=0;
int e=str.length()-1;

cout<<isPalindrome(str, s,e);

 
return 0;
}