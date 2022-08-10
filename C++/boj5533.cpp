#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> v[i][j];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tmp = v[j][i];
            for (int k = j+1; k < n; k++)
                if (v[k][i] == tmp)
                    v[j][i] = v[k][i] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
            sum += v[i][j];
        cout << sum << "\n";
    }
}