#include <bits/stdc++.h>
using namespace std;

// 2. MEMBER FUNCTION AS A "FRIEND FUNCTION"
class Base;

class Derived
{
public:
    void memberFunction(Base &b1);
};

class Base
{
private:
    int a = 10;

    friend void Derived::memberFunction(Base &b2);
};

void Derived::memberFunction(Base &b1)
{
    cout << b1.a << endl;
}

int main()
{
    Base b;
    Derived d;
    d.memberFunction(b);

    return 0;
}