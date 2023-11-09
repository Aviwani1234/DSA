#include <bits/stdc++.h>
using namespace std;

class Animal{

public:
void speak(){
    cout<<"I am speaking"<<endl;
}

};

class Dog : public Animal{

public:
    void speak(){
        cout<<"I am barking"<<endl;
    }
};
 
int main(){

Dog obj;
obj.speak();
 
return 0;
}