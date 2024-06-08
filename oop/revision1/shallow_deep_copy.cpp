#include <bits/stdc++.h>
using namespace std;

class Hero{
    public:
        int a=10;
        int b=20;
};
 
int main(){

    Hero h1;
    // cout<<h1.a<<endl;
    // cout<<h1.b<<endl;

    //shallow copy
    // Hero h2 = h1; 
    // cout<<h2.a<<endl;
    // cout<<h2.b<<endl;

    //deep copy
    Hero h2;
    h2.a = h1.a;
    h2.b = h1.b;
    h1.a = 99;
    cout<<h2.a<<endl;
    cout<<h2.b<<endl;
    cout<<h1.a<<endl;
    cout<<h2.a<<endl;
 
return 0;
}