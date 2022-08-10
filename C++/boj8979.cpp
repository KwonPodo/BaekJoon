#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// bool isSame(vector<int>& t1, vector<int>& t2)
// {
//     return t1[1] == t2[1] && t1[2] == t2[2] && t1[3] == t2[3];
// }

bool isBetter(vector<int>& find, vector<int>& t)
{
    if (find[1] == t[1])
    {
        if (find[2] == t[2])
            return find[3] < t[3];
        return find[2] < t[2];
    }
    return find[1] < t[1];
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> arr(n, vector<int> (4, 0));
    vector<int> to_find;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
        if (arr[i][0] == k)
            to_find = arr[i];
    }

    sort(arr.begin(), arr.end(), [] (vector<int>& t1, vector<int>& t2) -> bool { 
        if (t1[1] == t2[1])
        {
            if (t1[2] == t2[2])
            {
                return t1[3] > t2[3];
            }
            return t1[2] > t2[2];
        }
        else 
            return t1[1] > t2[1];
    });

    auto iter = arr.begin();
    int cnt = 0;
    while ((*iter)[0] != k)
    {
        if (isBetter(to_find, *iter))
            cnt++;
        iter++;
    }
    cout << cnt+1 << endl;

    // auto iter = unique(arr.begin(), arr.end(), isSame);
    // arr.erase(iter, arr.end());

    // int res;
    // for (iter = arr.begin(); iter != arr.end(); iter++)
    // {
    //     if ((*iter)[0] == k || isSame(*iter, to_find))
    //     {
    //         res = iter - arr.begin() + 1;
    //         break;
    //     }
    // }
    // cout << res << endl;
}