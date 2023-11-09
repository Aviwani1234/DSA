#include <bits/stdc++.h>
using namespace std;
 
int main(){

int arr[6] = {1,2,3,2,3,4};
map<int, int>m;
for(int i=0;i<6;i++)
{
    m[arr[i]]++;
}

 for(auto i:m)
 {
    cout<<i.first<<" "<<i.second<<endl;
//     for(auto j: i.second)
//     {
//         cout<<j;
//     }
}
 
return 0;
}