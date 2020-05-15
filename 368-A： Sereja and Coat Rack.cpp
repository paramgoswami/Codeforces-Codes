//https://codeforces.com/contest/368/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
  int n,d;
  cin>>n>>d;
  int a[n];
  int sum[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n;i++)
  {
    if(i==0)sum[i]=a[i];
    else sum[i]=a[i]+sum[i-1];
  }
  int m;
  cin>>m;
  int ans;
  if(m<=n)ans=sum[m-1];
  else ans=sum[n-1]-(m-n)*d;
  cout<<ans;
}