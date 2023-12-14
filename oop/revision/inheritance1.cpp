#include <bits/stdc++.h>
using namespace std;

//-------------------- simple or single inheritance -----------------------------
/*
class Human{
    public:
        int weight=70;
        int height=6;
};

class Male : public Human{  
    public:
        void printWeight()
        {
            cout<<"Weight of male is generally "<<weight<<" kg"<<endl;
        }
};

class Female : public Human{
    public:
        void printHeight()
        {
            cout<<"Height of female is generally "<<height<<" feet"<<endl;
        }
};
*/

// ----------------------------Multilevel Inheritance------------------------------------
class A{
    public:
        int x=10;
};

class B : public A{
    public:
        int y=20;

        void printX_in_classB()
        {
            cout<<x<<endl;
        }
};

class C : public B{
    public:
        void printXY_in_ClassC()
        {
            cout<<x<<endl;
            cout<<y<<endl;
        }
};
 
int main(){

// Male m;
// m.printWeight();

// Female f;
// f.printHeight();

B b;
//b.printX_in_classB();

C c;
c.printXY_in_ClassC();
 
return 0;
}