#include <bits/stdc++.h>
using namespace std;

class Cars{
    public:
        string color;
        //long long price;
};

int main(){

Cars c;
c.color="red";
//c.price=1500000;

cout<<c.color<<endl;
//cout<<c.price<<endl;

cout<<sizeof(Cars)<<endl;
cout<<sizeof(c)<<endl;
 
return 0;
}