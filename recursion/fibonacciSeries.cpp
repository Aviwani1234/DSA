#include <bits/stdc++.h>
using namespace std;

void fibonacciSeries(int n, int a,int b){      //recursive
  
  if(n==0)
    return;
   
    n--;
    int sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;
    fibonacciSeries(n,a,b);

}
 
int main(){

int n;
cin>>n;
int a=0,b=1;
cout<<a<<" "<<b<<" ";
 fibonacciSeries(n,a,b);

/*                //non-recursive 
int a=0,b=1;
cout<<a<<" "<<b<<" ";
for(int i=0; i<n; i++){
    int sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;
}
 */

return 0;
}