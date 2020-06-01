//https://codeforces.com/contest/510/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n,m;
  cin>>n>>m;
  int curr=3;
  int x=0;
  char ans[n][m];
  for(int i=0;i<n;i++)for(int j=0;j<m;j++)ans[i][j]='.';
  for(int i=0;i<m;i++)ans[0][i]='#';
  while(n>=curr)
  {
    int y=curr-2;
    if(x==0)
    {
      ans[y++][m-1]='#';
    }
    else
    {
      ans[y++][0]='#';
    }
    for(int i=0;i<m;i++)ans[y][i]='#';
    x=1-x;curr+=2;
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)cout<<ans[i][j];
    cout<<"\n";
  }
}