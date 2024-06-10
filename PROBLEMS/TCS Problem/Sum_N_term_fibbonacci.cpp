#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int n;
    cin>>n;
    int a=0, b=1;
    int sum = 0;
    int res=0;
    vector<int> temp;

    if(n==1){
        cout<<0<<endl;
    }
    else if(n==2) {
        cout<<1<<endl;
    }
    else {
        int result=1;
        temp.push_back(0);
        temp.push_back(1);
        n=n-2;
        while(n--){
            sum = a+b;
            a=b;
            b=sum;
            result += sum;
            temp.push_back(sum);
        }
        
        for(int i=0;i<temp.size();i++){
            //cout<<temp[i]<<" ";
            res += temp[i];
        }
       // cout<<res<<endl;
        cout<<result<<endl;
    }



return 0;
}