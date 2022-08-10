#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<char>> v;
    int m = 0;
    for (int i = 0; i < 5; i++)
    {
        string str;
        cin >> str;
        vector<char> vv;
        for (int j = 0; j < str.size(); j++)
            vv.push_back(str[j]);
        v.push_back(vv);

        m = max(m, int(str.size()));
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < 5; j++)
        {
            if (v[j].size() <= i)
                continue;
            else 
                cout << v[j][i];
        }
}