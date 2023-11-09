#include <bits/stdc++.h>
using namespace std;

void rowSum(int arr[][4], int n, int m){
    int sum=0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
           sum=sum+arr[row][col];
        }
        cout<<"The sum of row "<<row+1<<" is "<<sum<<endl;
        sum=0;
    }
}

bool isPresent(int arr[][4], int target, int n, int m)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    cout << "Your array is : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
   
   /*
    if(isPresent(arr,-4,3,4)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }*/

    rowSum( arr, 3, 4);


    return 0;
}