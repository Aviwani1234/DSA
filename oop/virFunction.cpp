#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
        virtual void greet()
        {
            cout<<"Hello Universe!"<<endl;
        }
}; 

class Child : public Parent{
    public:
        void greet()
        {
            cout<<"Hello World!"<<endl;
        }
};

int main(){

Child c;
Parent *p = &c;
p->greet();
 
return 0;
}