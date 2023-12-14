#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        void func()
        {
            cout<<"Hello Universe"<<endl;
        }
};

class B{
    public:
        void func()
        {
            cout<<"Hello World"<<endl;
        }
};

class C : public A, public B{

};
 
int main(){

    C c;
    //c.func();   // ------> Gives Ambiguty

    c.A :: func();
    c.B :: func();


 
return 0;
}