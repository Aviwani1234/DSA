#include <bits/stdc++.h>
using namespace std;

class Animal
{

public:
    int age = 1;
    int weight = 3;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{

public:
    int height;

public:
void bark(){
    cout<<"Barking"<<endl;
}
};

class Germanshepard : public Dog{


};

int main(){

Germanshepard g;
g.speak();
cout<<g.age<<endl;
cout<<g.height<<endl;
g.bark();
 
return 0;
}