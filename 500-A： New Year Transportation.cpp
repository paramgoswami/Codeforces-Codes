//https://codeforces.com/contest/500/problem/A

/* https://codeforces.com/problemset/problem/500/A */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    int state = 1;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    while (state < t)
    {
        state = state + a[state];
    }
    if (state == t)
        cout << "YES";
    else
        cout << "NO";
}