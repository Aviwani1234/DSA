#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        int x=10;

        void print()
        {
            cout<<"Inside class A"<<endl;
        }
};

class B{
    public:
        int x=10;

        void print()
        {
            cout<<"Inside class B"<<endl;
        }
};

class C : public A, public B{

};
 
int main(){

C c;
// cout<<c.x<<endl;  // Ambiguty
// cout<<c.print()<<endl; // Ambiguty

//solution
cout<<c.A::x<<endl;
c.A::print();

return 0;
}