#include <bits/stdc++.h>
using namespace std;

int euclidsRecursion(int a, int b)
{
    if (a == 0)
        return b;
    return euclidsRecursion(b%a, a);
}

int main()
{
     
    cout << euclidsRecursion(12, 8);
    return 0;
}