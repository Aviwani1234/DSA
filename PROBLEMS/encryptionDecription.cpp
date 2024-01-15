#include <bits/stdc++.h>
using namespace std;
 
int main(){

string input;
cin>>input;

char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string output = "";
for(int i=0;i<input.length();i++)
{
    int num = input[i]-97;
   // cout<<num<<endl;
    int index = (num + 3)%25;
    //cout<<index<<endl;
    output += arr[index];
}

cout<<output;
return 0;
}