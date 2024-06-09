#include <bits/stdc++.h>
using namespace std;

//1. Global function as freind function
class Base{
    private:
        int a=10;
    protected:
        int b=20;
    
    public:
        friend void print(Base &t);
};

void print(Base &t) {
    cout<<t.a<<endl;
    cout<<t.b<<endl;
}

//2. Member function of another class as a freind function
class Baseclass;

class Anotherclass{
    public:
        void print(Baseclass &t);
};

class Baseclass{
    private:
        int a=10;
    protected:
        int b=20;
    
    public:
        friend void Anotherclass::print(Baseclass &t);
};

void Anotherclass::print(Baseclass &t){
    cout<<t.a<<endl;
    cout<<t.b<<endl;
}

int main(){

    // Base b;
    // print(b);

    Baseclass obj1;
    Anotherclass obj2;
    obj2.print(obj1);

return 0;
}