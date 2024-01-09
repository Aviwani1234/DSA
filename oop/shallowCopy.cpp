#include <bits/stdc++.h>
using namespace std;

class Rectangle{
    public:
        int length = 10;
        int breadth = 5;
};
 
int main(){

Rectangle R1;
cout<<R1.length<<endl;
cout<<R1.breadth<<endl;

// shallow Copy
cout<<"Shallow Copy : "<<endl;
Rectangle R2 = R1;
cout<<R2.length<<endl;
cout<<R2.breadth<<endl;

// or
Rectangle R3;
R3 = R1;
cout<<R3.length<<endl;
cout<<R3.breadth<<endl;
 
return 0;
}