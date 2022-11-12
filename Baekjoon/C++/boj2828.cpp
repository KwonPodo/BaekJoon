#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int t; cin >> t;
    int cnt = 0;
    pair<int , int> status(0, m-1);
    for (int i = 0; i < t; i++)
    {
        int fall; cin >> fall;
        fall -= 1;
        
        if (status.first <= fall && fall <= status.second)
            continue;
        else if (status.second < fall)
        {
            int diff = fall - status.second;
            status.first += diff, status.second += diff;
            cnt += diff;
        }
        else if (fall < status.first)
        {
            int diff = status.first - fall;
            status.first -= diff, status.second -= diff;
            cnt += diff;
        }
    }
    cout << cnt;
}