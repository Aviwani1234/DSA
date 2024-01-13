#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    
    public:
        Complex(int r=0, int i=0)
        {
            real = r;
            imag = i;
        }

        Complex operator+(Complex const &obj)
        {
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }

        void print()
        {
            cout<<real<<" + i"<<imag<<endl;
        }
};
 
int main(){

Complex c1(10, 4), c2(2, 5);
Complex c3 = c1 + c2;
c3.print();
 
return 0;
}