//https://codeforces.com/contest/462/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check(vector<vector<char> >v)
{
  int n=v.size()-2;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      int count=0;
      if(v[i][j+1]=='o')count++;
      if(v[i][j-1]=='o')count++;
      if(v[i-1][j]=='o')count++;
      if(v[i+1][j]=='o')count++;
      if(count%2!=0)return false;
    }
  }
  return true;
}

void func()
{
  int n;
  cin>>n;
  vector<vector<char> >v(n+2,vector<char>(n+2));
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)cin>>v[i][j];
  }
  bool x=check(v);
  if(x==true)cout<<"YES\n";
  else cout<<"NO\n";
}

int main() 
{
  int t=1;
  while(t--)
  {
    func();
  }
}