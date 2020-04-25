//https://codeforces.com/contest/32/problem/B

/* https://codeforces.com/problemset/problem/32/B */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string s1, s2;
    s2 = "";
    cin >> s1;
    //cout << s1[0];
    for (int i = 0; i < s1.length(); i++)
    {
        //cout << "HO" << endl;
        if (s1[i] == '.')
        {
            //cout << "0";
            s2 = s2 + "0";
        }
        else if (s1[i] == '-' && s1[i + 1] == '.')
        {
            //cout << "1";
            s2 = s2 + "1";
            i++;
        }
        else
        {
            //cout << "2";
            s2 = s2 + "2";
            i++;
        }
    }
    cout << s2;
}