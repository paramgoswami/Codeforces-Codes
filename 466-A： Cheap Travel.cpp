//https://codeforces.com/contest/466/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n,m,a,b;
  cin>>n>>m>>a>>b;
  int x=n/m,y;
  y=n-m*x;
  cout<<min((x+1)*b,min(x*b+y*a,n*a));
}