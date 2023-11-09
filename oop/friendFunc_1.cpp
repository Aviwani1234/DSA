#include <bits/stdc++.h>
using namespace std;

// GLOBAL FUNCTION AS A "FRIEND FUNCTION"
class Base{
    private:
    int a=10;

    //public:   //access modifire not play any role in friend function
    friend void print(Base &b2);
};

void print (Base &b1)
{
    cout<<b1.a<<endl;
}

int main(){

Base b;
print(b);
 
return 0;
}