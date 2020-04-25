//https://codeforces.com/contest/155/problem/A

/* https://codeforces.com/problemset/problem/155/A */

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
    int min = a[0], max = a[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            count++;
        }
        else if (a[i] > max)
        {
            max = a[i];
            count++;
        }
    }
    cout << count;
}