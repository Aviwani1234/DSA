#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    static int a; //declaration 
};

int A::a=10;   //initialization 

int main(){

cout<<A::a<<endl;  // access
 
return 0;
}