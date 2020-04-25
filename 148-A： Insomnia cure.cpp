//https://codeforces.com/contest/148/problem/A

/* https://codeforces.com/problemset/problem/200/B */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int A[d + 1];
    for (int i = 1; i <= d; i++)
    {
        A[i] = 1;
    }
    for (int i = k; i <= d; i = i + k)
    {
        A[i] = 0;
    }
    for (int i = l; i <= d; i = i + l)
    {
        A[i] = 0;
    }
    for (int i = m; i <= d; i = i + m)
    {
        A[i] = 0;
    }
    for (int i = n; i <= d; i = i + n)
    {
        A[i] = 0;
    }
    int count = 0;
    for (int i = 1; i <= d; i++)
    {
        if (A[i] == 0)
            count++;
    }
    cout << (count);
}