//https://codeforces.com/contest/136/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  int p[n+1];
  int a;
  for(int i=1;i<=n;i++)
  {
    cin>>a;
    p[a]=i;
  }
  for(int i=1;i<=n;i++)cout<<p[i]<<" ";
}