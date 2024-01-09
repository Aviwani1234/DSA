#include <bits/stdc++.h>
using namespace std;

class Base;

class Another{
    public:
        void xyz(Base &b);
};

class Base{
    private:
        int private_var =10;
    protected:
        int protected_var = 20;
    
    public:
        friend void Another :: xyz(Base &b);
};

void Another :: xyz(Base &b)
{
    cout<<"Private value is : "<<b.private_var<<endl;
    cout<<"Protected value is : "<<b.protected_var<<endl;
}

int main(){

Base b;
Another a;
a.xyz(b);

return 0;
}