#include <bits/stdc++.h>
using namespace std;

class Father{

    private:
        int age=50;
    
    // age=50;
    public:
    void print(){
        cout<<age<<endl;
    }
 
    string name;
};

int main(){

    Father f;
    f.name="XYZ";
    cout<<f.name<<endl;
    f.print();

 
return 0;
}