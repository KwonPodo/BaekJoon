#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    std::getline(cin, str, '\n');
    string res;
    for (char c : str)
    {
        if ('a' <= c && c <= 'z')
        {
            if (c + 13 > 'z')
                res += char(c - 'z' + 12 + 'a');
            else 
                res += char(c + 13);
        }
        else if ('A' <= c && c <= 'Z')
        {
            if (c + 13 > 'Z')
                res += char(c - 'Z' + 12 + 'A');
            else 
                res += char(c + 13);
        }
        else 
            res += c;
    }
    cout << res;
}