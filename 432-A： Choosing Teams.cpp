//https://codeforces.com/contest/432/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n,k;
  cin>>n>>k;
  int ct=0,temp;
  for(int i=0;i<n;i++)
  {
    cin>>temp;
    if(temp<=(5-k))ct++;
  }
  cout<<ct/3;
}