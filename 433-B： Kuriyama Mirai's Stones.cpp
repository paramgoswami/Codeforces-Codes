//https://codeforces.com/contest/433/problem/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  long long int a[n],b[n];
  unsigned long long int dp1[n],dp2[n]; 
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    b[i]=a[i];
    dp1[i]=0;
    dp2[i]=0;
    if(i==0)dp1[i]=a[i];
    else dp1[i]=dp1[i-1]+a[i];
  }
  sort(b,b+n);
  for(int i=0;i<n;i++)
  {
    if(i==0)dp2[i]=b[i];
    else dp2[i]=dp2[i-1]+b[i];
  }
  int m;
  cin>>m;
  for(int i=0;i<m;i++)
  {
    int t,l,r;
    cin>>t>>l>>r;
    unsigned long long int x;
    if(t==1)x=dp1[r-1]-dp1[l-1]+a[l-1];
    else x=dp2[r-1]-dp2[l-1]+b[l-1];
    cout<<x<<endl;
  }
}