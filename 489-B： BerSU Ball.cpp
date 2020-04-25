//https://codeforces.com/contest/489/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n,m;
  map<int,int> boy,girl;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i],boy[a[i]]++;
  cin>>m;
  int b[m];
  for(int i=0;i<m;i++)cin>>b[i],girl[b[i]]++;
  sort(a,a+n);
  sort(b,b+m);
  int x=min(m,n),ct=0;
  for(int i=x-1;i>=0;i--)
  {
    if(x==m)
    {
      int z=b[i],t=-5;
      if(boy[z+1]>=1) t=z+1;
      else if(boy[z]>=1) t=z;
      else if (boy[z-1]>=1) t=z-1;

      if(t!=-5) ct++,boy[t]--;
    }
    else
    {
      int z=a[i],t=-5;
      if(girl[z+1]>=1) t=z+1;
      else if(girl[z]>=1) t=z;
      else if (girl[z-1]>=1) t=z-1;

      if(t!=-5) ct++,girl[t]--;
    }
  }
  cout<<ct<<endl;
}