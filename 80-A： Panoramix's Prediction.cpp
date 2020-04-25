//https://codeforces.com/contest/80/problem/A

/* https://codeforces.com/problemset/problem/80/A */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int next_prime(int n)
{
    for (int i = n + 1; i < 50; i++)
    {
        int flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
            return i;
    }
    return -1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int s = next_prime(n);
    //cout << s;
    if (s == m)
        cout << "YES";
    else
        cout << "NO";
}