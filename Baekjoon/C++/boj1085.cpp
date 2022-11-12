#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int min1 = min(w-x, h-y);
    int min2 = min(x, y);
    cout << min(min1, min2);
}