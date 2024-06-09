#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
        virtual void show(){
            cout<<"Hello Universe"<<endl;
        }
};

class Derived : public Base{
    public:
        void show(){
            cout<<"Hello World"<<endl;
        }
};

int main(){

    Derived d;
    Base* b = &d;
    b->show();

return 0;
}