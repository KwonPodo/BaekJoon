#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int n, m; cin >> n >> m;
        vector<int> v1(n, 0);
        vector<int> v2(m, 0);
        int j = 0;

        do
        {
            cin >> v1[j++];
        }
        while (getc(stdin) == ' ');
        
        j = 0;

        do
        {
            cin >> v2[j++];
        }
        while (getc(stdin) == ' ');

        // print
        // cout << endl;
        // for (j = 0; j < v1.size(); j++)
        //     cout << v1[j] << " ";
        // cout << endl;
        // for (j = 0; j < v2.size(); j++)
        //     cout << v2[j] << " ";
        // cout << endl;


        sort(v1.begin(), v1.end(), greater<int>());
        sort(v2.begin(), v2.end(), less<int>());

        // cout << endl;
        // for (j = 0; j < v1.size(); j++)
        //     cout << v1[j] << " ";
        // cout << endl;
        // for (j = 0; j < v2.size(); j++)
        //     cout << v2[j] << " ";
        // cout << endl;

        int cnt = 0;
        for (auto e1 : v1)
        {
            if (e1 <= v2[0]) break;
            for (auto e2 : v2)
            {
                if (e2 >= e1) break;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}