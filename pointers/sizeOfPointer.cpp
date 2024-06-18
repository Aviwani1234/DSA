#include <bits/stdc++.h>
using namespace std;
 
int main(){

int num =10;
int *p = &num;
cout<<sizeof(p)<<endl;

char ch = 'a';
char *c = &ch;
cout<<sizeof(c)<<endl;

return 0;
}