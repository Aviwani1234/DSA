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

int main(){

    Dog d;
    d.setColor();
    cout<<d.color<<endl;
    d.setType("domestic");
    cout<<d.type<<endl;

return 0;
}