//https://codeforces.com/contest/248/problem/A

/* https://codeforces.com/problemset/problem/248/A */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int lopen = 0, lclosed = 0, ropen = 0, rclosed = 0;
    int l[n], r[n];
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
        if (l[i] == 1)
            lopen++;
        else
            lclosed++;
        if (r[i] == 1)
            ropen++;
        else
            rclosed++;
    }
    int ans = min(lopen, lclosed) + min(ropen, rclosed);
    cout << ans;
}