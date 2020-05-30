//https://codeforces.com/contest/366/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  long long int min=1e12,mind=-1;
  for(int i=0;i<k;i++)
  {
    long long int sum=0;
    for(int j=0;j<(n/k);j++)
    {
      sum+=a[(i+k*j)%n];
    }
    if(sum<min)
    {
      min=sum,mind=i+1;
    }
  }
  cout<<mind;
}