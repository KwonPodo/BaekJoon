#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n; cin >> n;
    n -= 1;
    string std_str, pattern;
    cin >> std_str;
    vector<string> files(n);
    
    for (int i = 0; i < n; i++)
        cin >> files[i];
    
    for (int i = 0; i < std_str.size(); i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (files[j][i] != std_str[i])
            {
                pattern += '?';
                flag = true;
                break;
            }
        }
        if (flag) continue;
        else 
            pattern += std_str[i];
    }
    cout << pattern;
}