#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(vector<int>& v1, vector<int>& v2)
{
    if (v1[0] == v2[0])
        return v1[1] < v2[1];
    else 
        return v1[0] > v2[0];
}

int main()
{
    int n; cin >> n;
    deque<vector<int>> arr(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        vector<int> v(2); 
        cin >> arr[i][0] >> arr[i][1];
    }

    sort(arr.begin(), arr.end(), cmp);

    int cnt = count_if(arr.begin()+5, arr.end(), [arr] (vector<int>& t) -> bool { return arr[4][0] == t[0]; });

    cout << cnt << endl;

    cout << endl;
    for (deque<vector<int>>::size_type i = 0; i < n; i++)
    {
        for (unsigned int j = 0; j < 2; j++) 
            cout << arr[i][j] << " ";
        cout << endl;
    }
}