#include <iostream>
#include <vector>
using namespace std;

long long gauss(long long m, long long n)
{
    return (m+n) * (n + 1 - m) / 2;
}

int main() 
{
    vector<long long> v;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long a, b;
        cin >> a >> b;
        long long res;
        res = gauss(a, b);
        v.push_back(res);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << "Scenario #" << i+1 << ":\n" << v[i] << "\n\n";
    }
}