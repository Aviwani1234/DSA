#include <bits/stdc++.h>
using namespace std;
 
class Human{
    public:
        int age=1000;
        int weight;
        int height;
    
    void setAge(int age)
    {
        this->age = age;
    }

    void setWeight(int weight)
    {
        this->weight = weight;
    }

    void setHeight(int height)
    {
        this->height = height;
    }

    // public:
    // int getAge()
    // {
    //     return age;
    // }

};

class Male : public Human{
    
    public:
        string color;
    
    void setColor(string color)
    {
        this->color = color;
    }

    int getAge()
    {
        return age+1;
    }
        
};

int main(){

Male m;

//public - public
// m.setAge(48);
// m.setWeight(50);
// m.setHeight(12);
// m.setColor("fairy");
// cout<<m.age<<endl;
// cout<<m.weight<<endl;
// cout<<m.height<<endl;
// cout<<m.color<<endl;

cout<<m.getAge();

// Human h;
// cout<<h.getAge();
 
return 0;
}