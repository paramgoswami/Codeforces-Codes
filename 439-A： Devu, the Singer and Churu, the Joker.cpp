//https://codeforces.com/contest/439/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n,d;
  cin>>n>>d;
  int sum=0,a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
  if(d<sum+10*(n-1))cout<<"-1";
  else
  {
    cout<<(d-sum)/5;
  }
}