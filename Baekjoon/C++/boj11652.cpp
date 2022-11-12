#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    map<long long, long long> m;

    long long n, a;
    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        cin >> a;
        m[a]++;
    }

    /* for (map<int, int>::iterator iter = m.begin(); iter != m.end(); iter++) */
    /*     cout << iter->first << " : " << iter->second << endl; */
    /* cout << endl; */

    map<long long, long long>::iterator max_iter;
    max_iter = std::max_element(m.begin(), m.end(), [] (const pair<long long, long long>& x, const pair<long long, long long>& y) {return x.second < y.second;});
    cout << max_iter->first << endl;
}
