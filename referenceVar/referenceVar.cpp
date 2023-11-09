#include <bits/stdc++.h>
using namespace std;
 
int main(){

int i=5;
int &j=i;

cout<<i<<endl;
cout<<j<<endl;

i++;
cout<<j<<endl;
cout<<i<<endl;

j++;
cout<<i<<endl;
cout<<i<<endl;
 
return 0;
}