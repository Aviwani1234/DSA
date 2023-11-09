#include <bits/stdc++.h>
using namespace std;

void homeStep(int dest, int step)
{
    if (step == dest+1)
        return;

    cout << step << endl;
    homeStep(dest, step + 1);
}

int main()
{
    int dest;
    cin >> dest;
    int step;

    cout<<endl;

    homeStep(dest, step = 1);
    
    
    return 0;
}