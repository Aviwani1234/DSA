#include <bits/stdc++.h>
using namespace std;

class Human{
    public:
        int height;
        int weight;
};

class Male : public Human{
    public:  
        void setValue(int x, int y)
        {
            height=x;
            weight=y;
        }

        void print()
        {
            cout<<height<<endl;
            cout<<weight<<endl;
        }
};

int main(){

Male m;
m.setValue(10,20);
m.print();
 
return 0;
}