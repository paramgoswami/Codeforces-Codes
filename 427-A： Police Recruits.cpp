//https://codeforces.com/contest/427/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int n;
  cin>>n;
  int a[n];
  int x=0,y=0,ct=0;
  int present_officers=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]==-1)
    {
      if(present_officers>0)present_officers--;
      else ct++;
    }
    else present_officers+=a[i];
  }
  cout<<ct<<endl;
}