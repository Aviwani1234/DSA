#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
        int x;
        int y;
    
    Base(int a, int b)
    {
        x = a;
        y = b;
    }

    Base(Base& temp)
    {
        x = temp.x;
        y = temp.y;
    }
};

int main(){


Base b(10,20);
Base c(b);
cout<<c.x<<endl;
cout<<c.y<<endl;



 
return 0;
}