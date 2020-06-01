//https://codeforces.com/contest/152/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  int n,m;
  cin>>n>>m;
  int ans=0;
  int a[n][m],subj[m];
  for(int i=0;i<m;i++)subj[i]=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      char c;
      cin>>c;
      a[i][j]=c-'0';
      subj[j]=max(subj[j],a[i][j]);
    }
  }
  for(int i=0;i<n;i++)
  {
    int ct=0;
    for(int j=0;j<m;j++)if(a[i][j]==subj[j])ct=1;
    ans+=ct;
  }
  cout<<ans;
}

int main() 
{
  int t=1;
  while(t--)
  {
    func();
  }
}