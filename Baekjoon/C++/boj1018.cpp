#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<vector<int>> chess1(8, vector<int>(8, 0)), chess2(8, vector<int>(8, 0));
    for (int i = 0; i < 8; i++)
    {
        for (int j = (i % 2) ? 1 : 0; j < 8; j+=2)
            chess1[i][j] = 1;
        for (int j = (i % 2) ? 0 : 1; j < 8; j+=2)
            chess2[i][j] = 1;
    }

    // print Chess
    cout << "Print Chess1" << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            cout << chess1[i][j] << " ";
        cout << endl;
    }
    cout << "\nPrint Chess2" << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            cout << chess2[i][j] << " ";
        cout << endl;
    }

    int n, m; cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        string row_str; cin >> row_str;
        for (int j = 0; j < m; j++)
            arr[i][j] = (row_str[j] == 'B') ? 0 : 1;
    }

    // print Array
    cout << "Print arr" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    vector<int> results;
    for (int k = 0; k < m - 7; k++)
    {
        for (int i = 0; i < n - 7; i++)
        {
            int res1 = 0, res2 = 0;
            for (int j = 0; j < 8; j++)
            {
                res1 += inner_product(chess1[j].begin(), chess1[j].end(), arr[i+j].begin()+k, 0, plus<int>(), bit_xor<int>());
                res2 += inner_product(chess2[j].begin(), chess2[j].end(), arr[i+j].begin()+k, 0, plus<int>(), bit_xor<int>());
            }
            results.push_back(res1);
            results.push_back(res2);
        }
    }

    // print results
    cout << "Print Result" << endl;
    for (auto iter = results.begin(); iter != results.end(); iter++)
        cout << *iter << " ";
    cout << endl;
    
    cout << *min_element(results.begin(), results.end()) << endl;
}