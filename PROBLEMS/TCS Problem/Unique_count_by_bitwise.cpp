#include <bits/stdc++.h>
using namespace std;

void getSubArray(int *arr, int start, int end, vector<int> temp, map<int, int> &ans)
{
    if (start >= end)
    {
        return;
    }

    for (int i = start; i < end; i++)
    {
        temp.push_back(arr[i]);

        int result = 0;
        for (int j = 0; j < temp.size(); j++)
        {
            result |= temp[j];
        }
        ans.insert({result, result});

        getSubArray(arr, i + 1, end, temp, ans);
        temp.pop_back();
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> temp;
    map<int, int> ans;
    getSubArray(arr, 0, n, temp, ans);
    cout << ans.size() << endl;

    return 0;
}