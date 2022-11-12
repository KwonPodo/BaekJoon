#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int n, x;
    string str;
    stack<int> s;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, str, '\n');
        string::size_type pos = str.find(' ');
        if (pos != string::npos)
        {
            x = stoi(str.substr(pos+1));
            str = str.substr(0, pos);
        }

        if (!str.compare("push"))
        {
            s.push(x);
        }
        else if (!str.compare("pop"))
        {
            if (s.empty())
            {
                cout << -1 << endl;
                continue;
            }
            cout << s.top() << endl;
            s.pop();
        }
        else if (!str.compare("top"))
        {
            if (s.empty())
            {
                cout << -1 << endl;
                continue;
            }
            cout << s.top() << endl;
        }
        else if (!str.compare("size"))
        {
            cout << s.size() << endl;
        }
        else if (!str.compare("empty"))
        {
            cout << s.empty() << endl;
        }
    }
}
