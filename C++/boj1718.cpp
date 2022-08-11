#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string key, str;
    std::getline(cin, str, '\n');
    // cin.ignore();
    cin >> key;

    string ans;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if ('a' <= ch && ch <= 'z')
        {
            int l = key[i%key.size()] + 1 - 'a';
            if (str[i] - l < 'a')
                ans += char( str[i] + 26 - l );
            else 
                ans += char(str[i] - l);
        }
        else 
            ans += str[i];
    }
    cout << ans;
}