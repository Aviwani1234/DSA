#include <bits/stdc++.h>
using namespace std;

int euclidsAlgo(int a,int b){       //non recursive way
    
    if(a==0){
        return b;
    }

    if(b==0){
        return a;
    }

    while (a!=b)
    {
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return b;
    
}

int main(){
  
  int a,b;
  cout<<"Enter a: "<<endl;
  cin>>a;
  cout<<"Enter b: "<<endl;
  cin>>b;

  cout<<"GCD/HCF is "<<euclidsAlgo(a,b);

    return 0;
}