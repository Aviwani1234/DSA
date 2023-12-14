#include <bits/stdc++.h>
using namespace std;

class A{
    private:
        int x=10;
        int y=20;

    public:
        friend class B;
};

class B{
    public:
        void printXY(A &a)
        {
            cout<<"X : "<<a.x<<" and "<<"Y : "<<a.y<<endl;
        }

};
 
int main(){

A a;
B b;
b.printXY(a);
 
return 0;
}