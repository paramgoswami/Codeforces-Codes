//https://codeforces.com/contest/455/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  long long int a[n],m=0;
  map<long long int,long long int> x;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    m=max(m,a[i]);
    x[a[i]]++;
  }
  long long int dp[m+1],ans=0,arr=0;
  for(long long int i=0;i<=m;i++)
  {
    if(i==0)dp[i]=0;
    else if(i==1)dp[i]=i*x[i];
    else
    {
      arr=max(arr,dp[i-2]);
      dp[i]=i*x[i]+arr;
    }
    ans=max(ans,dp[i]);
  }
  cout<<ans<<endl;
}