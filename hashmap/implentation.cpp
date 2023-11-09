#include <bits/stdc++.h>
using namespace std;
 
int main(){


unordered_map<string,int> m;

pair<string, int> p1= make_pair("Avinash",1);
m.insert(p1);

m["Avi"] = 2;

pair<string, int> p2("V", 3);
m.insert(p2);

m["Avi"] = 299;

// for(auto i:m)
// {
//     cout<<i.first<<" "<<i.second<<endl;
// }
cout<<m["Avi"]<<endl;
cout<<m.at("V");

cout<<m.at("unknown")<<endl;
cout<<m["unknown"]<<endl;



 
return 0;
}