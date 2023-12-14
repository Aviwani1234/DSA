#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        int x=10;
};

class B : virtual public A{

};

class C : virtual public A{

};

class D : public B, public C{
    public:
        void printX()
        {
            cout<<x<<endl;
        }
};
 
int main(){

D d;
d.printX();

 
return 0;

}