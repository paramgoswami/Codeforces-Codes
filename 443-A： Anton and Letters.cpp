//https://codeforces.com/contest/443/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  string s;
  getline(cin,s);
  int n=s.length();
  set<char> x;
  for(int i=1;i<n-1;i++)
  {
    if((s[i]!=' ')&&(s[i]!=','))x.insert(s[i]);
  }
  cout<<x.size();
}