//https://codeforces.com/contest/219/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int n,k;
  cin>>k;
  cin>>s;
  map<char,int> x;
  n=s.length();
  for(int i=0;i<n;i++)
  {
    x[s[i]]++;
  }
  int ct=0;
  string t="",u="";
  for(auto it=x.begin();it!=x.end();it++)
  {
    int y=it->second;
    if(y%k!=0)
    {
      ct++;
      break;
    }
    else
    {
      for(int i=0;i<(y/k);i++)
      t+=it->first;
    }
  }
  for(int i=0;i<k;i++)u+=t;
  if(ct!=0)cout<<-1<<endl;
  else cout<<u<<endl;
}