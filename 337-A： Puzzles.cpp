//https://codeforces.com/contest/337/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int m,n;
  cin>>n>>m;
  int a[m];
  int min=2000;
  for(int i=0;i<m;i++)cin>>a[i];
  sort(a,a+m);
  if(n==m)cout<<a[m-1]-a[0]<<endl;
  else
  {
    for(int i=0;i<=m-n;i++)
    {
      if(min>a[n+i-1]-a[i])min=a[n+i-1]-a[i];
    }
    cout<<min<<endl;
  }
}