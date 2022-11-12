#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        unsigned int a, b;
        cin >> a >> b;
        a %= 26; b %= 26;
        string str; cin >> str;

        string ans;
        for (unsigned int c : str)
        {
            c -= 'A'; c %= 26;
            unsigned int res = (a*c + b) % 26;
            ans += char(alpha[res]);
        }
        cout << ans << "\n";
    }
}