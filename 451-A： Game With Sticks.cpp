//https://codeforces.com/contest/451/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n,m;
  cin>>n>>m;
  int x=min(m,n);
  if(x%2==0)cout<<"Malvika";
  else cout<<"Akshat";
}