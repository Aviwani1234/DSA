#include <bits/stdc++.h>
using namespace std;

class Hero{
    private:
        char level;
        int health;
    
    public:
        char getLevel()
        {
            return level;
        }

        int getHealth()
        {
            return health;
        }

        void setLevel(char ch)
        {
            level = ch;
        }

        void setHealth(int h)
        {
            health = h;
        }
};

int main(){

    //Hero h1;
    Hero *h1 = new Hero;
    cout<<h1<<endl;
    cout<<(*h1).getLevel()<<endl;

    (*h1).setHealth(10);
    (*h1).setLevel('A');

    cout<<(*h1).getHealth()<<endl;
    cout<<(*h1).getLevel()<<endl;

    cout<<h1->getHealth()<<endl;
    cout<<h1->getLevel()<<endl;
    
return 0;
}