#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(vector<int>& v1, vector<int>& v2)
{
    if (v1[1] == v2[1])
    {
        if (v1[2] == v2[2]) return v1[3] < v2[3];
        else return v1[2] < v2[2];
    }
    else 
        return v1[1] > v2[1];
}

int main()
{
    int n; cin >> n;
    vector<vector<int>> arr(n, vector<int>(4, 0));
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = i+1;
        cin >> arr[i][1] >> arr[i][2] >> arr[i][3];
    }

    sort(arr.begin(), arr.end(), cmp);
    cout << arr[0][0];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //         cout << arr[i][j] << " ";
    //     cout << endl;
    // }
}