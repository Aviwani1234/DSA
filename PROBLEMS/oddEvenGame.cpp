#include <bits/stdc++.h>
using namespace std;
 
int main(){

int num;
for(int i=0; i<3;i++){
   cin>> num;
   if(num%2==0){
    cout<<"Game Win"<<endl;
    break;
   }
}
if(num%2!=0){
    cout<<"You lost game";
}

 
return 0;
}