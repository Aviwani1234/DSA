#include <bits/stdc++.h>
using namespace std;

void findArrayIntersection(int arr1[], int n, int arr2[], int m)
{
	vector<int> v(n,0);
    vector<int> v1(m,0);
    vector<int> v3;

    for (int i = 0; i < n; i++)
    {
        if (v[i]==1)
           continue;

        for (int j = 0; j < m; j++)
        {  
            if (v1[j]==1)
               continue;

           if (arr1[i]==arr2[j])
           {   
              v3.push_back(arr1[i]);
              v[i]=1;
              v1[j]=1; 
              break;
           }
           
        }
        
        
    }
  // return v3;  
  for (int i = 0; i < v3.size(); i++)
  {
    cout<<v3[i]<<" ";
  }
    

}
 
int main(){

    int arr1[6]={1, 2, 2, 2, 3, 4};
    int arr2[4]={2,2,3,3};
    findArrayIntersection(arr1,6,arr2,4);

 
return 0;
}