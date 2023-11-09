#include <bits/stdc++.h>
using namespace std;

class Time{
    public:
        void t()
        {
            cout<<"I am TIME, an essential part of speed calculation"<<endl;
        }
};

class Distance{
    public:
        void d()
        {
            cout<<"I am DISTANCE, an essential part of speed calculation"<<endl;
        }
};

class Speed: protected Distance, public Time{
    public:
        void temp()
        {
            d();
        }
        void v()
        {
            cout<<"I want time and distance";
        }
};

int main(){

    Speed s;
    s.t();
    s.temp();
    s.v();

return 0;
}