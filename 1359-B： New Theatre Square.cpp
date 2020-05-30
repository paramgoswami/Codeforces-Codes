//https://codeforces.com/contest/1359/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    char c[n][m];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)cin>>c[i][j];
    }
    int tile1=0,tile2=0;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(c[i][j]=='.')
        {
          if((j<m-1)&&(c[i][j+1]=='.'))tile2++,j++;
          else tile1++;
        }
      }
    }
    cout<<min(tile1*x+tile2*y,tile1*x+tile2*2*x)<<endl;
  }
}