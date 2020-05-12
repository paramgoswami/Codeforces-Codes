//https://codeforces.com/contest/268/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int n;
  cin>>n;
  int ans=0;
  int h[n],a[n];
  for(int i=0;i<n;i++)cin>>h[i]>>a[i];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==j)continue;
      if(h[i]==a[j])ans++;
    }
  }
  cout<<ans;
}