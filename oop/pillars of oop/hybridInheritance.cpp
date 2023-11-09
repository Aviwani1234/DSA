#include <bits/stdc++.h>
using namespace std;

class A{

public:
    void funcA(){
        cout<<"Inside func-A"<<endl;
    }

};

class D{

public:
    void funcD(){
        cout<<"Inside func-D"<<endl;
    }
};

class B: public A{

public:
    void funcB(){
        cout<<"Inside func-B"<<endl;
    }
};

class C: public A, public D{

public:
    void funcC(){
        cout<<"Inside func-c"<<endl;
    }
};
 
int main(){

A a;
a.funcA();

D d;
d.funcD();

B b;
b.funcA();
b.funcB();

C c;
c.funcA();
c.funcD();
c.funcC();
 
return 0;
}