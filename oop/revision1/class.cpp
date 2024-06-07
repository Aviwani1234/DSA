#include <bits/stdc++.h>
using namespace std;

class Hero {
    public:
        int a=10;
        int b=20;
};
 
int main(){

Hero h; //static object creation
// cout<<h.a<<endl;
// cout<<h.b<<endl;

Hero* h1 = new Hero; //Dynamic object creation
// cout<<(*h1).a<<endl;
// cout<<(*h1).b<<endl;

cout<<h1->a<<endl;
cout<<h1->b<<endl;
 
return 0;
}