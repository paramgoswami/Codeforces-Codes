//https://codeforces.com/contest/476/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n,m;
  cin>>n>>m;
  int x=(((n+1)/2)%m==0)?(n+1)/2:(n+1)/2+m-(((n+1)/2)%m);
  if(x<=n)cout<<x;
  else cout<<"-1";
}