#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
        void func()
        {
            cout<<"Inside func 1";
        }
};

class Dog : public Animal{
    public:
        void func()
        {
            cout<<"Inside func 2";
        }
};

int main(){

Animal a;
// a.func();

Dog d;
d.func();
 
return 0;
}