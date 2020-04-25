//https://codeforces.com/contest/59/problem/A

/* https://codeforces.com/problemset/problem/59/A */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int lower = 0, upper = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) < 97)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    //cout << lower << " " << upper;
    if (upper > lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
}