//https://codeforces.com/contest/151/problem/A

/* https://codeforces.com/problemset/problem/151/A */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int d1, d2, d3;
    d1 = k * l / nl;
    d2 = c * d;
    d3 = p / np;
    int ans = min(min(d1, d2), d3);
    cout << ans / n;
}