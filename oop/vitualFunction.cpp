#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    virtual void func()
    {
        cout<<"Hello Universe"<<endl;
    }
};

class B : public A{
    public:
    void func()
    {
        cout<<"Hello World"<<endl;
    }
};
 
int main(){

B b;
A*a = &b;
a->func();

return 0;
}