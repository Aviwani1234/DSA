#include <bits/stdc++.h>
using namespace std;

class A{
    private:
        int private_var = 10;
    protected :
        int protected_var = 20;
    
    public:
        friend void xyz(A &a);
};

void xyz(A &a)
{
    cout<<"Private value is : "<<a.private_var<<endl;
    cout<<"Protected value is : "<<a.protected_var<<endl;
}
 
int main(){


A a;
xyz(a);
 
return 0;
}