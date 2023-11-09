#include <bits/stdc++.h>
using namespace std;

class Father{
    private:
        int age;
        string name;
    
    public:
        Father(int age, string name)
        {
            this->age = age;
            this->name = name;
           // cout<<"constructer is called"<<endl;
        }

        Father(Father &temp)
        {
            this->age=temp.age;
            this->name=temp.name;
        }

        void print()
        {
            cout<<age<<endl;
            cout<<name<<endl;
        }
};

int main(){

    Father f(50,"yyy");
    Father s(f);
    s.print();
 
return 0;
}