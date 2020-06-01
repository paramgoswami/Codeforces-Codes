//https://codeforces.com/contest/496/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  int n;
  cin>>n;
  int mv=-1e9;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n-1;i++)mv=max(a[i+1]-a[i],mv);
  int newerror=1e8;
  for(int i=1;i<n-1;i++)
  {
    int mx=a[i+1]-a[i-1];
    newerror=min(newerror,max(mx,mv));
  }
  cout<<newerror<<"\n";
}

int main() 
{
  int t=1;
  while(t--)
  {
    func();
  }
}