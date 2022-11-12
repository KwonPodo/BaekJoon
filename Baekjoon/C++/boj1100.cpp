#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    char chess[8][8] = {0, };
    for (int r = 0; r < 8; r++)
    {
        string str;
        cin >> str;
        for (int c = 0; c < 8; c++)
            chess[r][c] = str[c];
    }

    for (int r = 0; r < 8; r++)
    {
        for (int c = 0; c < 8; c++)
        {
            if (( r % 2 == 0 && c % 2 == 0 && chess[r][c] == 'F' ) || ( r % 2 == 1 && c % 2 == 1 && chess[r][c] == 'F' ))
                cnt++;
        }
    }

    cout << cnt;
}