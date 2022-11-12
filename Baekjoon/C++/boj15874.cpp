#include <string>
#include <iostream>
using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;
    k %= 26;
    cin.ignore();
    string str;
    std::getline(cin, str, '\n');

    for (char c : str)
    {
        if ('a' <= c && c <= 'z') 
        {
            if (c + k > 'z')
                c = char(int(c) - 26);
            cout << char(int(c) + k);
        }
        else if ('A' <= c && c <= 'Z')
        {
            if (c + k > 'Z')
                c = char(int(c) - 26);
            cout << char(int(c) + k);
        }
        else 
            cout << c;
    }
}