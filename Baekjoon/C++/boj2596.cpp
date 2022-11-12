#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    map<char, string> code =
    {
        {'A', "000000"},
        {'B', "001111"},
        {'C', "010011"},
        {'D', "011100"},
        {'E', "100110"},
        {'F', "101001"},
        {'G', "110101"},
        {'H', "111010"}
    };
    int n;
    cin >> n;
    string res = "";
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        string letter = str.substr(i*6, i*6+6);

        bool unknown_flag;
        for(map<char, string>::iterator m_iter = code.begin(); m_iter != code.end(); m_iter++)
        {
            int cnt = 0;
            unknown_flag = true;
            for (int j = 0; j < 6; j++)
                if (int(letter[j]) ^ int(m_iter->second[j])) cnt++;

            if (cnt <= 1)
            {
                res += m_iter->first;
                unknown_flag = false;
                break;
            }
        }
        if (unknown_flag)
        {
            cout << i+1;
            return 0;
        }
    }
    cout << res;
}