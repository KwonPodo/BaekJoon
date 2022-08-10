#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int n, cnt;
    cin >> n;
    cnt = n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != str[i+1])
            {
                if (str.find(str[i], i+1) != string::npos) 
                {
                    cnt--;
                    break;
                }
            }
        }
    }

    cout << cnt;
}