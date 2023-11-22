#include <bits/stdc++.h>
using namespace std;

class A{
    private:
        int x=10;
        int z=30;

    public:
        int y=20;
        void printX()
        {
            cout<<x<<endl;
        }

        int returnZ()
        {
            return z;
        }
};

int main(){

A a;
a.printX();
cout<<a.y<<endl;
int k = a.returnZ();
cout<<k<<endl;
 
return 0;
}