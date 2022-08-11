#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    while (n > 0)
    {
        if ((n % 5) % 3 == 0)
        {
            sum += n / 5;
            n %= 5;
            sum += n / 3;
            n %= 3;
        }
        else 
        {
            if (n - 3 < 0)
            {
                cout << -1;
                return 0;
            }
            n -= 3;
            sum++;
        }
    }
    cout << sum;
}
