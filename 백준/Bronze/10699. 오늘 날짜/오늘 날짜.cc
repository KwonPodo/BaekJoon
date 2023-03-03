#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main() 
{
    time_t current_time = time(NULL);

    struct tm* t = localtime(&current_time);

    cout << t->tm_year + 1900 << "-";
    cout.width(2);
    cout.fill('0');

    cout << t->tm_mon + 1 << "-";

    cout.width(2);
    cout.fill('0');
    cout << t->tm_mday << endl;
}
