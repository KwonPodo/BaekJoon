#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int m; char type;
        cin >> m >> type;
        vector<int> vi(m); vector<char> vc(m);
        for (int j = 0; j < m; j++)
        {
            if (type == 'C')
                cin >> vc[j];
            else 
                cin >> vi[j];
        }
        if (type == 'C')
        {
            for (unsigned int i = 0; i < vc.size(); i++)
                cout << vc[i] - 'A' + 1 << " "; 
            cout << "\n";
        }
        else 
        {
            for (unsigned int i = 0; i < vi.size(); i++)
                cout << char( vi[i] - 1 + 'A') << " "; 
            cout << "\n";
        }
    }
}