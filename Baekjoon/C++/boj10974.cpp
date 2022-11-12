#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr;
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
        arr.push_back(i);
    do 
    {
        for (unsigned int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    while (next_permutation(arr.begin(), arr.end()));
}