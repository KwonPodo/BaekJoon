#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    int r, c;

    for (r = int(sqrt(n)); r > 0; r--)
    {
        if (n % r == 0)
        {
            c = n / r;
            break;
        }
    }
    vector<vector<char>> arr(c, vector<char> (r, 0));

    for (int i = 0; i < n; i++)
    {
        arr[i/r][i%r] = str[i];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << arr[j][i];
    }
}