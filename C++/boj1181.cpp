#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cin.ignore();
    }
    
    sort(v.begin(), v.end(), [] (string& s1, string& s2) -> bool { 
        if (s1.size() == s2.size())
        {
            return s1 < s2;
        }
        else 
            return s1.size() < s2.size();
    });

    string prev;
    for (auto s: v)
    {
        if (s == prev) continue;
        cout << s << "\n";
        prev = s;
    }
}