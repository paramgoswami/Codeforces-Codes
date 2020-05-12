//https://codeforces.com/contest/1153/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int n,t;
  cin>>n>>t;
  int a[n],b[n];
  for(int i=0;i<n;i++)cin>>a[i]>>b[i];
  int v=1e8,maxv;
  int ans[n];
  for(int i=0;i<n;i++)
  {
    if(((t-a[i])%b[i]==0)&&(t>=a[i]))ans[i]=t;
    else if(t<a[i])ans[i]=a[i];
    else ans[i]=t+b[i]-(t-a[i])%b[i];
  }
  for(int i=0;i<n;i++)
  {
    //cout<<ans[i]<<" ";
    if(ans[i]<v)
    {
      v=ans[i];
      maxv=i+1;
    }
  }
  cout<<maxv;
}