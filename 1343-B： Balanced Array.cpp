//https://codeforces.com/contest/1343/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    if(n%4!=0)
    {
      cout<<"NO"<<endl;
    }
    else
    {
      cout<<"YES"<<endl;
      for(int i=2;i<=n;i=i+2)cout<<i<<" ";
      for(int i=1;i<n-1;i=i+2) cout<<i<<" ";
      cout<<(3*n-2)/2<<endl;
    }
  }
}