#include <bits/stdc++.h>
using namespace std;
 
int main(){

 int a=20,b=30;
 int *ptr1= &a;
 int *ptr2= &b;
 cout<<(*ptr1) + (*ptr2)<<endl;
 
return 0;
}