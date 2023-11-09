#include <bits/stdc++.h>
using namespace std;

class Student{

private:
    string name;
    int roll_num=122;
    char batch;

public:
    
    int getnum(){
        return roll_num;
    }

};
 
int main(){
 
 Student a1;
 cout<<a1.getnum();

return 0;
}