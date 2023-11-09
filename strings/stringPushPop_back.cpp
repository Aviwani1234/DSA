#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cout<<"Enter your string : ";
  cin>>s;
  cout<<s<<endl;

  s.push_back('A');
  cout<<"String after pushback: "<<endl;
  cout<<s<<endl;

  s.pop_back();
  cout<<"String after popback: "<<endl;
  cout<<s;


    return 0;
}