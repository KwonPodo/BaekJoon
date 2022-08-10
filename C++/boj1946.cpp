#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string resStr;
    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n; cin >> n;
        vector<pair<int, int>> v(n, pair<int,int>(0, 0));
        for (int j = 0; j < n; j++)
        {
            cin >> v[j].first >> v[j].second;
        }

        sort(v.begin(), v.end(), [] (pair<int, int>& p1, pair<int, int>& p2) -> bool 
        {
            return p1.first < p2.first;
        });

        int cmp = v[0].second, res = 0;
        for (int i = 0; i < n; i++)
        {
            if (cmp >= v[i].second)
            {
                res++;
                cmp = v[i].second;
            }
        }
        cout << res << "\n";
        // int res = n;
        // for (int j = 0; j < n; j++)
        // {
        //     for (int k = 0; k < n; k++)
        //     {
        //         if (j == v[k][0]) continue;
        //         if (v[j][1] > v[k][1] && v[j][2] > v[k][2])
        //         {
        //             res--;
        //             break;
        //         }
        //     }
        // }
        // resStr += to_string(res) + "\n";
    }
}