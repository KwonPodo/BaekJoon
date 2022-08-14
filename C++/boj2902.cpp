#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str; cin >> str;
    string kmp; kmp += str[0];
    auto pos = str.find('-');
    while (pos != string::npos)
    {
        pos += 1;
        kmp += str[pos];
        pos = str.find('-', pos);
    }
    cout << kmp;
}