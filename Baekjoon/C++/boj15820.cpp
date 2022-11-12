#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int s1, s2; cin >> s1 >> s2;
    bool sample_flag = false;
    for (int i = 0 ; i < s1; i++)
    {
        long sample, ans;
        cin >> sample >> ans;
        if (sample != ans)
        {
            sample_flag = true;
            break;
        }
    }

    bool test_flag = false;
    for (int i = 0; i < s2; i++)
    {
        long test, ans;
        cin >> test >> ans;
        if (test != ans)
        {
            test_flag = true;
            break;
        }
    }

    if (sample_flag)
        cout << "Wrong Answer";
    else if (test_flag)
        cout << "Why Wrong!!!";
    else
        cout << "Accepted";
}