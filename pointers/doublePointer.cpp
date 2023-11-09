#include <bits/stdc++.h>
using namespace std;
 
int main(){

int num=5;
int *ptr=&num;

//cout<<*ptr;

int **p=&ptr;

cout<<*p;
 
return 0;
}