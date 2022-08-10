#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    int n; cin >> n;
    string result_str;
    for (int i = 0; i < n; i++)
    {
        string str1, str2;
        cin >> str1 >> str2;
        bitset<100> b1(str1), b2(str2);
        unsigned long l1 = b1.to_ulong(), l2 = b2.to_ulong();
        bitset<100> res(l1 + l2);
        string result = res.to_string();

        int pos = result.find('1');
        if (pos != string::npos)
            result = result.substr(pos);
        else 
            result = "0";
        
        result_str += result + "\n";
    }
    cout << result_str;
    return 0;
}