//https://codeforces.com/contest/350/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  int n,m;
  cin>>n>>m;
  int mx=-1e8,minx=1e8,my=1e8,ans;
  for(int i=0;i<n;i++)
  {
    int t;
    cin>>t;
    mx=max(mx,t);
    minx=min(minx,t);
  }
  for(int i=0;i<m;i++)
  {
    int t;
    cin>>t;
    my=min(my,t);
  }
  int ct=0;
  for(int i=mx;i<my;i++)
  {
    if(i>=2*minx)
    {
      cout<<i;
      return;
    }
  }
  cout<<"-1";
}

int main() 
{
  int t=1;
  while(t--)
  {
    func();
  }
}