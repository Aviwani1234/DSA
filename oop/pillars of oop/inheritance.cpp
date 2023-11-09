#include <bits/stdc++.h>
using namespace std;

class Human{

    public:
    int height=5;
    int weight;
    int age;

    void sleep(){
        cout<<"sleep"<<endl;
    }

};

class Male : public Human{

    public:
    string color="red";
    
    int getHeight(){
        return height+1;
    }
};

 
int main(){

Male m1;
// cout<<m1.height<<endl;
  cout<<m1.getHeight()<<endl;
// cout<<m1.weight<<endl;
// cout<<m1.age<<endl;
// m1.sleep();
// cout<<m1.color<<endl;
 
return 0;
}