#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
        int x;
        int y;

    //Default Constructor (Manual Implementation)
    // Base(){
    //     cout<<"I'm a Default Constructor"<<endl;
    // }
    
    // Parameterized Constructor
    //a. Parameterized Constructor with different parameter name than Data members
    // Base(int a, int b){
    //     cout<<"I'm a Parameterized Constructor"<<endl;
    //     x=a;
    //     y=b;
    //     cout<<x<<" "<<y<<endl;
    // }

    //b. Parameterized Constructor with same parameter name as Data members
    Base(int x, int y){
        cout<<"I'm a Parameterized Constructor"<<endl;
        this->x=x;
        this->y=y;
        cout<<x<<" "<<y<<endl;
    }

    // Copy Constructor
    Base(Base &b)
    {
        cout<<"I'm a Copy constructor"<<endl;
        this->x = b.x;
        this->y = b.y;
        cout<<x<<" "<<y<<endl;
    }
};
 
int main(){

Base b(10,20);

Base b1(b);

return 0;
}