#include <bits/stdc++.h>
using namespace std;


#include<math.h>
int checkgoodnumber(int num)
{
     int ans=0;
     int i=0;
    while (num!=0)
    {
           int bit =num & 1;

           ans= (bit * pow(10,i))+ans;

           num=num>>1;
           i++;
    }
    for (int i = 0; i < ans; i++)
    {
        if(i==1 && i+1 ==1){
            return 1;
        }
    }
    
   return 0;
}
 
int main(){

int num;
cin>>num;
if(checkgoodnumber(num))
   cout<<"Yes";
else
   cout<<"No";
 
return 0;
}