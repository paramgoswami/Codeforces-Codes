//https://codeforces.com/contest/365/problem/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  if((n==1)||(n==2)) cout<<n<<endl;
  else
  {
    int dp[n-1];
    dp[n-2]=2;
    for(int i=n-3;i>=0;i--)
    {
      //int cur=2;
      if(a[i]+a[i+1]==a[i+2])
      {
        dp[i]=1+dp[i+1];
      }
      else dp[i]=2;
    }
    int max=-1;
    for(int i=0;i<n-1;i++)
    {
      if(max<dp[i])max=dp[i];
    }
    cout<<max<<endl;
  }
}