#include <bits/stdc++.h>
using namespace std;

 //recursion
 int isPower(int a, int b){

    if(b==0)
      return 1;
    
    if(b==1)
      return a;
    
    int ans=isPower(a, b/2);
     
    if(b%2==0){
      return ans*ans; 
    }
    else{
       return a*ans*ans;   
    }
 }
 
int main(){

int a,b,ans=1;
cin>>a>>b;

//buit in function
// cout<<pow(a,b);

//loop
// int answer=1;
// for(int i=0; i<b; i++){
//     answer=answer*a;
// }
// cout<<answer;
 

cout<<isPower(a,b);

return 0;
}