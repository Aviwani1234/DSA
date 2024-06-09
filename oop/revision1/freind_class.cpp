#include <bits/stdc++.h>
using namespace std;

class Base{
    private:
        int a=10;
    protected:
        int b=20;
    
    public:
        friend class Child;
};

class Child{
    public:
        void print(Base &b){
            cout<<b.a<<endl;
            cout<<b.b<<endl;
        }
};
 
int main(){

    Base b;
    Child c;
    c.print(b);
 
return 0;
}