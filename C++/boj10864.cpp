#include <iostream>
#include <array>
#include <string.h>
using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;
    int arr[n][n];
    memset(arr, 0, sizeof(arr));
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << arr[i][j] << " ";
    //     cout << endl;
    // }

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a-1][b-1] |= 1; arr[b-1][a-1] |= 1;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << arr[i][j] << " ";
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j) continue;
            cnt += arr[i][j];
        }
        cout << cnt << '\n';
    }
}