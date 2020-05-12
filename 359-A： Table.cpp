//https://codeforces.com/contest/359/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int a[n][m];
  int c=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
      if(((i==0||i==n-1)||(j==0 || j==m-1))&&(a[i][j]==1))c=1;
    }
  }
  if(c==1)cout<<"2";
  else cout<<"4";
}