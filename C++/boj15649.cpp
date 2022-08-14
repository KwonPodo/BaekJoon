#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 1; i <= n; i++)
        v[i-1] = i;
    
    do 
    {
        for (unsigned int i = 0; i < m; i++)
            cout << v[i] << " ";
        cout << "\n";
        reverse(v.begin() + m, v.end());
    }
    while (next_permutation(v.begin(), v.end()));
}