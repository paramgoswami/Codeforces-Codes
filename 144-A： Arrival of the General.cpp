//https://codeforces.com/contest/144/problem/A

/* https://codeforces.com/problemset/problem/144/A */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min_ind = n, max_ind = -1, min = 101, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_ind = i;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] < min)
        {
            min = a[i];
            min_ind = i;
        }
    }
    int moves;
    if (max_ind > min_ind)
    {
        moves = (n - 1 - min_ind) + max_ind - 1;
    }
    else
    {
        moves = (n - 1 - min_ind) + max_ind;
    }
    cout << moves;
}
