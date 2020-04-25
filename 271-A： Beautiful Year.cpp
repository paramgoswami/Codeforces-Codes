//https://codeforces.com/contest/271/problem/A

/* https://codeforces.com/problemset/problem/271/A */

#include <iostream>
#include <string>

using namespace std;

int func_year(int year)
{
    int d1, d2, d3, d4;
    for (int i = year + 1;; i++)
    {
        d1 = i / 1000;
        d2 = i / 100 - 10 * d1;
        d4 = i % 10;
        d3 = (i % 100 - d4) / 10;
        if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4)
        {

            return i;
        }
    }
}

int main()
{
    int year, d1, d2, d3, d4;
    cin >> year;
    int ans = func_year(year);
    cout << ans;
}