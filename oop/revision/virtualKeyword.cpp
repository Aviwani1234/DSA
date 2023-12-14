#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        virtual void print()
        {
            cout<<"Hello Universe"<<endl;
        }
};

class B : public A{
    public:
        void print()
        {
            cout<<"Hello world"<<endl;
        }
};

int main(){

B b;
A *a = &b;
a->print();
 
return 0;
}