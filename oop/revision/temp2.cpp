#include <bits/stdc++.h>
using namespace std;

class Temp{
    public:
        int a;
        int b;

    Temp(int x, int y)
    {
        a=x;
        b=y;
    }
};

int main(){

    Temp t1(1,2);
    Temp t2(t1);
    cout<<t2.a<<endl;
    cout<<t2.b<<endl;

return 0;
}