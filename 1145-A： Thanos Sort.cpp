//https://codeforces.com/contest/1145/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int solve(int a[],int n)
{
  if(n==1)return 1;
  int ct=0;
  for(int i=0;i<n-1;i++)
  {
    if(a[i]>a[i+1])ct++;
  }
  if(ct==0)return n;
  int b[n/2],c[n/2];
  for(int i=0;i<n;i++)
  {
    if(i<n/2)b[i]=a[i];
    else c[i-n/2]=a[i];
  }
  return max(solve(b,n/2),solve(c,n/2));
}

int main() 
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int x=solve(a,n);
  cout<<x<<endl;
}