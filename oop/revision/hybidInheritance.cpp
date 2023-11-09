#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        void a()
        {
            cout<<"I'm a!"<<endl;
        }
};

class B: public A{
    public:
        void b()
        {
            cout<<"I'm b!"<<endl;
        }
};

class C: public A{
    public:
        void c()
        {
            cout<<"I'm c!"<<endl;
        }
};

class D: public C{
    public:
        void d()
        {
            cout<<"I'm d!"<<endl;
        }
};

int main(){

A a1;
a1.a();

//simple inheritance
B b1;
b1.a();
b1.b();

// B and C both combine are example of Hirarchical Inh.
C c1;
c1.a();
c1.c();

// multilevel inh.
D d1;
d1.a();
d1.c();
d1.d();

// combine hybrid inh.
 
    return 0;
}