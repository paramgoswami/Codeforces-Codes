//https://codeforces.com/contest/1360/problem/D

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  int n,k;
  cin>>n>>k;
  int ans=-1e9;
  int f1,f2;
  for(int i=1;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      f1=i,f2=n/i;
      if(f1<=k)ans=max(ans,f1);
      if(f2<=k)ans=max(ans,f2);
    }
  }
  cout<<n/ans<<endl;
}

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    func();
  }
}