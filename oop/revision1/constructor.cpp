#include <bits/stdc++.h>
using namespace std;

class Hero{
    public:
        int a=10;
        int c=20;
        int b;
    
    // default or unparameterized constructor
    Hero(){
        cout<<"I'm a default Or Unparameterized constructor"<<endl;
    }

    //parameterized constrcutor
    //1. parameter with different name as data-member name
    // Hero(int k){
    //     b = k;
    //     cout<<"I'm a parameterized constructor"<<endl;
    // }

    //2. same parameter name as data-member name
    Hero(int b) {
        this->b = b;
        cout<<"I'm a parameterized constructor"<<endl;
    }

    //copy constructor
    Hero(Hero &temp) {
        this->a = temp.a;
        this->b = temp.b;
        this->c = temp.c;
    }

}; 
 
int main(){

    Hero h;

    Hero h1(20);
   // cout<<h1.b<<endl;

    //cout<<h.b<<endl;
    Hero h2(h1);
    cout<<h2.a<<endl;
    cout<<h2.b<<endl;
    cout<<h2.c<<endl;
 
return 0;
}