//https://codeforces.com/contest/501/problem/A

/* https://codeforces.com/problemset/problem/501/A */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a, b, c, d, m1, m2;
    cin >> a >> b >> c >> d;
    m1 = max(3 * a / 10, a - (a * c / 250));
    m2 = max(3 * b / 10, b - (b * d / 250));
    if (m1 > m2)
        cout << "Misha";
    else if (m2 > m1)
        cout << "Vasya";
    else
        cout << "Tie";
}
