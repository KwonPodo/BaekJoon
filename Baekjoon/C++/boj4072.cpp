#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (true)
    {
        string str; std::getline(cin, str, '\n');
        if (str == "#") break;

        string s, res;
        size_t cur = 0;
        auto pos = str.find(' ');
        while (pos != string::npos)
        {
            s = str.substr(cur, pos - cur);
            for (auto riter = s.rbegin(); riter != s.rend(); riter++)
                res += *riter;
            res += ' ';
            cur = pos + 1;
            pos = str.find(' ', cur);
        }
        s = str.substr(cur, pos - cur);
        for (auto riter = s.rbegin(); riter != s.rend(); riter++)
            res += *riter;
        cout << res << endl;
    }
}