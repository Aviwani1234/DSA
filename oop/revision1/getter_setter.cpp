#include <bits/stdc++.h>
using namespace std;

class Hero{
    private:
        int a=10;
        int b=20;
        int c;
    
    public:
        //getter functions
        int get_a(){
            return a;
        }

        int get_b(){
            return b;
        }

        int get_c(){
            return c;
        }

        //setter function
        void set_c(int k){
            c = k;
        }
};
 
int main(){

    Hero h;
    // cout<<h.a<<endl; //not possible directly because of it declare as private


    cout<<h.get_a()<<endl;
    cout<<h.get_b()<<endl;
    cout<<h.get_c()<<endl;


    h.set_c(9999);
    cout<<h.get_c()<<endl;
 
return 0;
}