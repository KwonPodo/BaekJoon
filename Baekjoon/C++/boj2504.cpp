#include <iostream>
#include <stack>
using namespace std;

bool isRight(string& str)
{
    stack<int> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (st.empty())st.push(str[i]);
        else 
        {
            if (( str[i] == ')' && st.top() == '(' ) || ( str[i] == ']' && st.top() == '[' ))
                st.pop();
            else
                st.push(str[i]);
        }
    }

    return st.empty();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str; cin >> str;
    if (!isRight(str))
        cout << 0;
    else 
    {
        int multi = 1, res = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
            {
                multi *= 2;
            }
            else if (str[i] == '[')
            {
                multi *= 3;
            }
            else if (str[i] == ')')
            {
                if (str[i - 1] == '(')
                    res += multi;
                multi /= 2;
            }
            else if (str[i] == ']')
            {
                if (str[i - 1] == '[')
                    res += multi;
                multi /=3;
            }
        }

        cout << res;
    }
}