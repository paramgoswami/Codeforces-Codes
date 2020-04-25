//https://codeforces.com/contest/1025/problem/A

/* https://codeforces.com/contest/1025/problem/A */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a;
    int b[26];
    for (int i = 0; i < 26; i++)
    {
        b[i] = 0;
    }
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        //cin >> a[i];
        b[a[i] - 'a']++;
    }
    //int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (b[i] > 1)
        {
            cout << "Yes" << endl;

            return 0;
        }
    }
    if (n == 1 || n == 0)
    {
        cout << "Yes";
        return 0;
    }
    cout << "No";
}
