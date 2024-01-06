#include <bits/stdc++.h>
using namespace std;

class Human{
    public:
        int Age;
        char BloodGroup;
    
    // Parameterized Constructor
    Human(int a, char ch)
    {
        Age = a;
        BloodGroup = ch;
    }

    //Copy Constructor
    Human(Human & temp)
    {
        this->Age = temp.Age;
        this->BloodGroup = temp.BloodGroup;
    }
};

int main(){

Human H(21,'O');
// cout<<H.Age<<endl;
// cout<<H.BloodGroup<<endl;

Human H1(H);
cout<<H1.Age<<endl;
cout<<H1.BloodGroup<<endl;
 
return 0;
}