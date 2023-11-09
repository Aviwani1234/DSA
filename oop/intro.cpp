#include <bits/stdc++.h>
using namespace std;

class Hero{

    private:
       char name;
       int age;
     
    public:
       int health=10;
       char level='a';

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

// Hero h1;                   //statically object declaration
//cout<<"size : "<<sizeof(Hero)<<endl;

// cout<<h1.health<<endl;
// cout<<h1.level<<endl;
// h1.setAge(10);
// cout<<h1.getAge()<<endl;

// h1.setname('a');
// cout<<h1.getname()<<endl;

Hero *b=new Hero;                 //dynamically object declaration

// cout<<b->health<<endl;
// cout<<b->level<<endl;

// cout<<(*b).health<<endl;
// cout<<(*b).level<<endl;
b->setAge(10);
b->setname('v');

cout<<(*b).getAge()<<endl;
cout<<(*b).getname()<<endl;

cout<<b->getAge()<<endl;
cout<<b->getname()<<endl;
return 0;
}