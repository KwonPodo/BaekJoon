#include <iostream>
#include <array>
using namespace std;

int main()
{
    bool flag = false;
    array<int, 9> a, b; 
    for (int i = 0; i < 9; i++)
        cin >> a[i];
    for (int i = 0; i < 9; i++)
        cin >> b[i];
    int a_sum, b_sum;
    a_sum = b_sum = 0;

    for (int i = 0; i < 9; i++)
    {
        a_sum += a[i];
        if ( a_sum > b_sum )
        {
            flag = true;
            break;
        }
         b_sum += b[i];
    }

    cout << ( flag ? "Yes" : "No" );
}
