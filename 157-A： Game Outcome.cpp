//https://codeforces.com/contest/157/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  int a[n][n];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)cin>>a[i][j];
  
  int count=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      int rsum=0,csum=0;
      for(int k=0;k<n;k++)rsum+=a[i][k],csum+=a[k][j];
      if(csum>rsum)count++;
    }
  }
  cout<<count;
}