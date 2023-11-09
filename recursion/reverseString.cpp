#include <bits/stdc++.h>
using namespace std;

//non-recursive
string reverseString(string s){
  
  int i=0;
  int e=s.length()-1;

  while(i<e){
    swap(s[i++],s[e--]);
  }
  
  return s;

}

//recursive
string reverseStringRec(string s, int i, int e)
{

    if (i > e)
    {
        return s;
    }

    swap(s[i++], s[e--]);

    return reverseStringRec(s, i, e);
}

string reverseOnepointer(string s, int i, int n){

  if(i>(n-1-i))
       return s;
  
  swap(s[i], s[n-1-i]);
  i++;

  return reverseOnepointer(s, i, n);
}

int main()
{

    string s;
    cin >> s;

    int n = s.length();
    int e = n - 1;
    int i = 0;
    
    // cout<<reverseString(s);
    // cout << reverseStringRec(s, i, e);

    cout<<reverseOnepointer(s,i,n);

    return 0;
}