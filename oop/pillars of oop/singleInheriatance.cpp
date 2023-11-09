#include <bits/stdc++.h>
using namespace std;

class Animal
{

public:
    int age = 1;
    int weight = 3;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{

public:
    int height;
};

int main()
{

    Dog d;
    d.speak();
    cout<<d.weight<<endl;
    cout<<d.age<<endl;
    cout<<d.height<<endl;
    return 0;
}