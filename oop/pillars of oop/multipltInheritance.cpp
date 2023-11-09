#include <bits/stdc++.h>
using namespace std;

class Animal{

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};

class Human{

public:
void bark(){
    cout<<"Barking"<<endl;
}

};

class Sample : public Animal, public Human{


};
 
int main(){

Sample s;

s.bark();
s.speak();
 
return 0;
}