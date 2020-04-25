//https://codeforces.com/contest/61/problem/A

/* http://codeforces.com/problemset/problem/61/A */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string a1, a2;
    cin >> a1 >> a2;
    int size = a1.length();
    char a3[size];
    for (int i = 0; i < size; i++)
    {
        if (a2[i] == a1[i])
            a3[i] = '0';
        else
            a3[i] = '1';
    }
    for (int i = 0; i < size; i++)
    {
        cout << a3[i];
    }
}