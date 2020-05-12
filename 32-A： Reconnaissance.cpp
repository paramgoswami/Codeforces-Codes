//https://codeforces.com/contest/32/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int n,d;
  cin>>n>>d;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];    
  }
  int ct=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i!=j)
      {
        if((a[j]<=a[i]+d)&&(a[j]>=a[i]-d))ct++;
      }
    }
  }
  cout<<ct<<endl;
}