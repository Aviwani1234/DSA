#include <bits/stdc++.h>
using namespace std;
 
int main(){

cout<<"Enter your number: "<<endl;
int num;
cin>>num;

map<int, string> m;
m.insert({0,"zero"});
m.insert({1,"one"});
m.insert({2,"two"});
m.insert({3,"three"});
m.insert({4,"four"});
m.insert({5,"five"});
m.insert({6,"six"});
m.insert({7,"seven"});
m.insert({8,"eigth"});
m.insert({9,"nine"});

// for(auto i:m){
//     cout<<i.first<<" "<<i.second<<endl;
// }

vector<int> v;

while(num){
    int rem=num%10;
    v.push_back(rem);
    num=num/10;
}

reverse(v.begin(), v.end());

// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
// }

cout<<"Your number in words: "<<endl;
for(int i=0; i<v.size(); i++){
    for(auto j:m){
        if(v[i]==j.first){
           cout<<j.second<<" ";
           break;
        }
    }
}

 
return 0;
}