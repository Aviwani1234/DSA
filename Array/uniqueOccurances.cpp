#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurances(int arr[], int n)
{
    vector<int> v={0};
    vector<int> s;

    for (int i = 0; i < n; i++)
    {   
         if(v[i]==1)
            continue;

            int count = 1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {   
                v[j]=1;
                count++;
            }
        }
        cout<<arr[i]<<":"<<count<<endl;
        s.push_back(count);
    }

    for (int i = 0; i < s.size(); i++)
    {
       cout<<s[i]<<" ";
    }
    cout<<endl;
     for (int i = 0; i < s.size(); i++)
     {
       for (int j = i+1; j<s.size(); j++)
       {
         if(s[i]==s[j]){
           // cout<<"no";
           // break;
           return 0;
         }
       }
       
     }
     return 1;
     //cout<<"yes";
   
    }
    


int main()
{

    int arr[6] = {1, 1, 2, 2, 3, 3};
    cout<<uniqueOccurances(arr, 6);

    return 0;
}