#include <bits/stdc++.h>
using namespace std;
 
int main(){

int x, ans=0;
cin>>x;
int num=x;

if(x<0){
    cout<<"not palindrom"<<endl;
}

while(x){
    int digit=x%10;
    ans=(ans*10)+digit;
    x=x/10;
}

if(ans==num){
    cout<<"palindrom"<<endl;
}
else{
    cout<<"Not palindrome"<<endl;
}
 
return 0;
}