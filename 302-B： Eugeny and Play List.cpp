//https://codeforces.com/contest/302/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void func()
{
  int m,n;
  cin>>n>>m;
  int c[n],t[n],pref[n];
  for(int i=0;i<n;i++)
  {
    cin>>c[i]>>t[i];
    if(i==0)pref[i]=c[i]*t[i];
    else pref[i]=pref[i-1]+c[i]*t[i];
  }
  int x=0;
  for(int i=0;i<m;i++)
  {
    int v;cin>>v;
    while(v>pref[x])x++;
    cout<<1+x<<endl;
  }
}
int main() 
{
  func();
}