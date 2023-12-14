#include <bits/stdc++.h>
using namespace std;

// ---- Member function of another class as friend function ----
class Base;

class anotherClass{
    public:
        void printVal(Base &b);
};

class Base{
    private:
        int x;
        int y;
    
    public:
        Base()
        {
            x=10;
            y=20;
        }
        friend void anotherClass :: printVal(Base &);
};

void anotherClass :: printVal(Base &b)
{
    cout<<"X : "<<b.x<<" and "<<"Y : "<<b.y<<endl;
}



// ---- Global Function as a freind function ---- 
// class A{
//     private:
//         int x;

//     protected:
//         int y;

//     public:
//         A(){
//             x=10;
//             y=20;
//         }
    
//     friend void friendFunction(A &a);
// };

// void friendFunction(A &a)
// {
//     cout<<a.x<<endl;
//     cout<<a.y<<endl;
// }
 
int main(){

// A a;
// friendFunction(a);

Base b;
anotherClass a;
a.printVal(b);
 
return 0;
}