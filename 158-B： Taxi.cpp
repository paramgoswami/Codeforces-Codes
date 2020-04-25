//https://codeforces.com/contest/158/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  int a[n];
  int b[5];
  memset(b,0,sizeof(b));
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    b[a[i]]++;
  }
  //cout<<b[1]<<b[2]<<b[3]<<b[4];
  int ct=0;
  ct+=b[4];
  //cout<<ct<<endl;
  ct+=b[3];
  //cout<<ct<<endl;
  b[1]=max(0,b[1]-b[3]);
  ct+=(b[2]%2==0)?b[2]/2:(1+b[2]/2);
  //cout<<ct<<endl;
  if(b[2]%2==1)b[1]-=2;
  if(b[1]>0)
  {
    ct+=(b[1]%4==0)?b[1]/4:(1+b[1]/4);
  }
  cout<<ct<<endl;
}