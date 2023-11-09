#include<bits/stdc++.h>
using namespace std;

int powerFind(int a,int b){
    int result=1;
    for (int i = 1; i <= b; i++)
    {
        result=result*a;
    }
    return result ; 
}

int main(){

cout<<powerFind(5,3);
    return 0;
}