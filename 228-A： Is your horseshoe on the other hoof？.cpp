//https://codeforces.com/contest/228/problem/A

/* https://codeforces.com/problemset/problem/228/A */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n[4];
    cin >> n[0] >> n[1] >> n[2] >> n[3];
    sort(n, n + 4);
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        if (n[i] == n[i + 1])
            count++;
    }
    cout << count;
}