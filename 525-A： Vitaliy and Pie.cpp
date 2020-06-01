//https://codeforces.com/contest/525/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;cin>>n;
  string s;
  cin>>s;
  int l=s.length();
  map<char,int> c;
  int count=0;
  for(int i=0;i<l;i++)
  {
    if(i%2==0)c[s[i]]++;
    else
    {
      char d=tolower(s[i]);
      if(c[d]>0)c[d]--;
      else count++;
    }
  }
  cout<<count;
}