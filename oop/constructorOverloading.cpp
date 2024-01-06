#include <bits/stdc++.h>
using namespace std;

class A{
    public:

        A(){
            cout<<"First Constructor"<<endl;
        }

        A(int num){
            cout<<"Constructor Number "<<num<<endl;
        }

};
 
int main(){

    A a1;
    A a(1);

 
return 0;
}