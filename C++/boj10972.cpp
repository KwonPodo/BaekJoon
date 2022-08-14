#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    if (!next_permutation(v.begin(), v.end()))
        cout << -1;
    else 
    {
        for (size_t i = 0; i < n; i++)
            cout << v[i] << " ";
    }
}