#include <bits/stdc++.h>
using namespace std;
 
int main(){
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,x,b,y;
	    cin>>a>>x>>b>>y;
	   
	        float va=float(a)/float(x);
	        float vb=float(b)/float(y);
	        if(va>vb){
	            cout<<"Alice"<<endl;
	        }
	        else if(va==vb){
	            cout<<"Equal"<<endl;
	        }
	        else{
	            cout<<"Bob"<<endl;
	        }
	    
	    
	}
 
return 0;
}