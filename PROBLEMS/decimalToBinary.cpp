#include <bits/stdc++.h>
using namespace std;
 
void solve(int n)
{
    vector<int> rem;
    while(n)
    {
        int digit = n%2;
        rem.push_back(digit);
        n = n/2;
    }

    reverse(rem.begin(), rem.end());

    for(int i=0;i<rem.size();i++)
    {
        cout<<rem[i];
    }
}

int main(){

int n;
cin>>n;
solve(n);
 
return 0;
}