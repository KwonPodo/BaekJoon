#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int lsum, rsum;
    lsum = rsum = 0;
    for (int i = 0; i < str.size()/2; i++)
        lsum += int(str[i]);
    for (int j = str.size()/2; j < str.size(); j++)
        rsum += int(str[j]);
    
    if (lsum == rsum) cout << "LUCKY";
    else cout << "READY";
}