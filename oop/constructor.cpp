#include <bits/stdc++.h>
using namespace std;

class Hero{

    private:
       char name;
       int age;
     
    public:
       int health;
       char level='a';
    
    Hero(){                               //default constructor
        cout<<"constructor is called";
    }

    Hero(int k){                           //parameterised constructor
        health=k;
    }

    // Hero(int health, char level){            //parameterised constructor  with same parameter name as datamember
    //     this->health=health;                 //here use this keyword bcoz this keyword store the address of current obj
    //     this->level=level;                //in this case address of obj h1, so parameter health and levels value is copied
    // }                                  //into current objects health and value which r datamember(this reduce confusion in case of same name)

    Hero(int k, char l){                           //parameterised constructor
        health=k;
        level=l;
    }

    // Hero(Hero & temp){
    //     this->health=temp.health;
    //     this->level=temp.level;
    // }
    
    void print(){
       cout<<health<<endl;
       cout<<level<<endl;
    }

    char getname(){
        return name;
    }

    int getAge(){
        return age;
    }

    void setname(char a){
        name=a;
    }

    void setAge(int b){
        age=b;
    }
    
};
 
int main(){

// Hero h1(10,'m');
// cout<<h1.health<<endl;
// cout<<h1.level<<endl;

Hero h1(11,'m');
Hero h2(h1);

h1.print();

h2.print();

h1.health=12;

h1.print();

h2.print();


 
return 0;
}