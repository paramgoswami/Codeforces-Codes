//https://codeforces.com/contest/141/problem/A

/* https://codeforces.com/problemset/problem/141/A */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int n1[26], n2[26];
    for (int i = 0; i < 26; i++)
    {
        n1[i] = 0;
        n2[i] = 0;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        int temp = s1[i] - 'A';
        n1[temp]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        int temp = s2[i] - 'A';
        n1[temp]++;
    }
    for (int i = 0; i < s3.length(); i++)
    {
        int temp = s3[i] - 'A';
        n2[temp]++;
    }
    int flag = 0;
    for (int i = 0; i < 26; i++)
    {
        if (n1[i] != n2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "NO";
    else
        cout << "YES";
}