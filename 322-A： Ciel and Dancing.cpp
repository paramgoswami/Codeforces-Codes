//https://codeforces.com/contest/322/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n,m;
  cin>>n>>m;
  int k=n+m-1;
  cout<<k<<endl;
  for(int i=0;i<k;i++)
  {
    if(i<n)cout<<i+1<<" "<<1<<endl;
    else cout<<1<<" "<<i-n+2<<endl;
  }
}