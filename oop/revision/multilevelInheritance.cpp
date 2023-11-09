#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
        string color;
        int weight;
    
    void isCute()
    {
        cout<<"Yes! I am"<<endl;
    }
};

class Dog: public Animal{
    public:
        string type;
    
    void setColor()
    {
        color="Black";
    }

    void setType(string type)
    {
        this->type=type;
    }
};

class GermanShephard : public Dog{
    public:
        void conclusion()
        {
            cout<<"Yes!.. I inherite the property of class A as well as my predecessor class B, so because of my this nature here is a multilevel Inheritance";
        }
};

int main(){

    GermanShephard g;
    g.setColor();
    cout<<g.color<<endl;
    g.isCute();
    g.conclusion();

return 0;
}