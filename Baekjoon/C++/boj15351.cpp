#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    cin.ignore();
    while (n--)
    {
        string str;
        std::getline(cin, str, '\n');
        int score = 0;
        for (char c : str)
        {
            if (c == ' ') continue;
            score += c - 64;
        }
        string perfect = "PERFECT LIFE";
        if (score == 100) 
            cout << perfect << endl;
        else 
            cout << score << endl;
    }
}