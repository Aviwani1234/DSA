#include <bits/stdc++.h>
using namespace std;

class Temp{
    private:
        int a=10;
    
    public:
        int print()  //getter function
        {
            return a;
        }

        void setValue(int val) //setter function
        {
            a = val;
        }
};

int main(){

// Temp t;  //static object creation
// cout<<t.print()<<endl;
// t.setValue(2);
// cout<<t.print()<<endl;

//Dynamic object creation
Temp *t = new Temp;
cout<<(*t).print()<<endl;
 //OR
cout<<t->print()<<endl;

 
return 0;
}