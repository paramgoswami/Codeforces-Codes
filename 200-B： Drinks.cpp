//https://codeforces.com/contest/200/problem/B

/* https://codeforces.com/problemset/problem/200/B */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double a[n];
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
    }
    ans = ans / n;
    cout << setprecision(10) << ans;
}