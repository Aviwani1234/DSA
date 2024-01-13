#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        static int a;   // declaration
};

int A::a=10;   // initilization

int main(){

cout<<A::a<<endl;   // accessing
 
return 0;
}