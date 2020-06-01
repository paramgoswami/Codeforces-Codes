//https://codeforces.com/contest/330/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  int r,c;
  cin>>r>>c;
  char a[r][c];
  set<int> row,col;
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      cin>>a[i][j];
      if(a[i][j]=='S')row.insert(i),col.insert(j);
    }
  }
  int ans=0;
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      if((row.count(i)==0)||(col.count(j)==0))ans++;
    }
  }
  cout<<ans<<"\n";
}

int main() 
{
  int t=1;
  while(t--)
  {
    func();
  }
}