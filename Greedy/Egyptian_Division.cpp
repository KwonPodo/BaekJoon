/*
    문제:
        유리수 p/q가 주어지면, 분자가 1인 분수들의 합으로 p/q를 포현하시오.

    풀이:
    주어진 수 p/q에 대해서, 이 수의 역수 q/p와 같거나 큰 가장 작은 정수 [q/p]를 찾고,
    1/[q/p]를 p/q에서 뺀다. 이 과정을 0이 될 때까지 반복.

    5/6 에 대해, [6/5] = 2.  5/6 - 1/2 = 1/3
    1/3 에 대해, [3/1] = 3.  1/3 - 1/3 = 0
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// p/q - 1/tmp 
pair<int, int> frac_sub(const int& p, const int& q, const int& t)
{
    // 분자
    int numerator = p * t - q;
    // 분모
    int denominator = q * t;

    if (denominator % numerator == 0) 
    {
        denominator /= numerator;
        numerator = 1;
    }

    return make_pair(numerator, denominator);
}

int main()
{
    int p, q;
    int cnt = 1;
    cin >> p >> q;

    int tmp = (int)ceil((double)q/(double)p);
    
    // p/q - 1/tmp 
    if (q != tmp)
    {
        do
        {
            pair<int, int> res = frac_sub(p, q, tmp);
            p = res.first; q = res.second;
            tmp = (int)ceil((double)q / (double)p);
            cnt++;
        }
        while (q != tmp);
    }

    cout << cnt << endl;
}