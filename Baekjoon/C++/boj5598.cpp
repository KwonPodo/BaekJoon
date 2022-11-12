#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str; cin >> str;
    for (auto& ch : str)
    {
        if (ch == 'A' || ch == 'B' || ch == 'C')
            ch = char(int(ch) + 26);
        cout << char(int(ch) - 3);
    }
}