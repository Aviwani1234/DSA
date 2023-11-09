#include <bits/stdc++.h>
using namespace std;

class A{

public:
    void abc(){
        cout<<"abc"<<endl;
       
    }

    void abc(char d){
        cout<<"abc"<< d <<endl;
      
    }

};

int main(){

char j='n';
A obj;
obj.abc(j);

return 0;
}