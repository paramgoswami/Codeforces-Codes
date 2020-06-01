//https://codeforces.com/contest/276/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  int n,k;
  cin>>n>>k;
  int mv=-1e9;
  int a,b;
  for(int i=0;i<n;i++)
  {
    cin>>a>>b;
    if(b<=k)mv=max(mv,a);
    else mv=max(mv,a+k-b);
  }
  cout<<mv<<"\n";
}

int main() 
{
  int t=1;
  while(t--)
  {
    func();
  }
}