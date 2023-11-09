#include <bits/stdc++.h>
using namespace std;

class Avinash{
    private:
        int weight;
    protected:
        int height;
    
    public:
    Avinash()
    {
        weight=56;
        height=170;
    }
    
    friend class Rutik;
};

class Rutik{
    public:
    void display(Avinash &vi)
    {
        cout<<"Weight of Avinash is : "<<vi.weight<<endl;
        cout<<"Height of Avinash is : "<<vi.height<<endl;
    }
};
int main(){

    Avinash A;
    Rutik R;
    R.display(A);
 
return 0;
}