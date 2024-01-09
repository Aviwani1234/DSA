#include <bits/stdc++.h>
using namespace std;

class Rectangle{
    public:
        int length = 10;
        int breadth = 5;
    
    void setValue(int l, int b)
    {
        length = l;
        breadth = b;
    }
};
 
int main(){

Rectangle R1;
cout<<R1.length<<endl;
cout<<R1.breadth<<endl;

// Deep Copy
Rectangle R2;
R2.length = R1.length;
R2.breadth = R2.breadth;

cout<<R2.length<<endl;
cout<<R2.breadth<<endl;

// change value
cout<<"Changed Value"<<endl;
R1.setValue(2,1);
cout<<R1.length<<endl;
cout<<R1.breadth<<endl;

cout<<R2.length<<endl;
cout<<R2.breadth<<endl;
 
return 0;
}