#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector<string> v;
    while(true)
    {
        string str;
        getline(cin, str, '\n');
        if (str == ".") break;
        v.push_back(str);
    }

    for (vector<string>::size_type i = 0; i < v.size(); i++)
    {
        stack<char> stk;
        bool flag = true;
        for (auto ele : v[i])
        {
            if (ele == '(' || ele == '[')
                stk.push(ele);
            else if (ele == ')')
            {
                if (!stk.empty() && stk.top() == '(')
                    stk.pop();
                else 
                {
                    cout << "no\n";
                    flag = false;
                    break;
                }
            }
            else if (ele == ']')
            {
                if (!stk.empty() && stk.top() == '[')
                    stk.pop();
                else 
                {
                    cout << "no\n";
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            if (stk.empty())
                cout << "yes\n";
            else 
                cout << "no\n";
        }
    }
}