//https://codeforces.com/contest/474/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() 
{
  int n,q;
  cin>>n;
  int N=1e6+5;
  int a[N];
  int temp;
  int x=1;
  for(int i=1;i<=n;i++)
  {
    cin>>temp;
    while(temp--)
    {
      a[x]=i;
      x++;
    }
  }
  cin>>q;
  for(int i=0;i<q;i++)
  {
    cin>>temp;
    cout<<a[temp]<<endl;
  }
  //for(int i=0;i<m;i++)cout<<ans[i]+1<<endl;
}