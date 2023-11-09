#include <bits/stdc++.h>
using namespace std;

class Hero{
    private:
        int health=10;
        char level;
    
    public:
        int getHealth()
        {
            return health;
        }
};

int main(){

Hero h;
cout<<h.getHealth();
 
return 0;
}