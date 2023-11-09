#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void eat() = 0;
};

class Tiger:public Animal
{
    public:
    void eat()
    {
        cout<<"I only eat meat"<<endl;
    }
};

int main(){

Tiger t;
t.eat();
 
return 0;
}