#include <iostream>
#include <array>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    array<int, 1000001> seq;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> seq[i];
    }

    vector<char> ans;
    stack<int> stk;
    for (int i = 1; i <= n; i++)
    {
        stk.push(i);
        ans.push_back('+');

        while (!stk.empty() && stk.top() == seq[cnt])
        {
            stk.pop();
            ans.push_back('-');
            cnt++;
        }
    }
    if (!stk.empty())
        cout << "NO" << endl;
    else 
    {
        for (vector<char>::iterator iter = ans.begin(); iter != ans.end(); iter++)
            cout << *iter << endl;
    }
}