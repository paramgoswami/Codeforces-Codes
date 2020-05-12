//https://codeforces.com/contest/435/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int ct=0,curr=0;
  for(int i=0;i<n;i++)
  {
    if((curr+a[i])<=m)curr+=a[i];
    else
    {
      ct++;
      curr=a[i];
    }
  }
  ct++;
  cout<<ct;
}