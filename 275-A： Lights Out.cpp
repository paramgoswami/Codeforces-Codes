//https://codeforces.com/contest/275/problem/A

/* https://codeforces.com/problemset/problem/275/A */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t[3][3];
    int s[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            s[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> t[i][j];
        }
    }

    s[0][0] = (t[0][0] + t[0][1] + t[1][0] + 1) % 2;
    s[0][1] = (t[0][0] + t[0][2] + t[1][1] + t[0][1] + 1) % 2;
    s[0][2] = (t[0][2] + t[0][1] + t[1][2] + 1) % 2;
    s[1][0] = (t[0][0] + t[1][1] + t[1][0] + t[2][0] + 1) % 2;
    s[1][1] = (t[1][0] + t[0][1] + t[1][2] + t[1][1] + t[2][1] + 1) % 2;
    s[1][2] = (t[0][2] + t[1][1] + t[2][2] + t[1][2] + 1) % 2;
    s[2][0] = (t[2][0] + t[2][1] + t[1][0] + 1) % 2;
    s[2][1] = (t[2][0] + t[1][1] + t[2][1] + t[2][2] + 1) % 2;
    s[2][2] = (t[2][1] + t[1][2] + t[2][2] + 1) % 2;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << s[i][j];
        }
        cout << endl;
    }
    cout << endl;
}