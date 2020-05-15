//https://codeforces.com/contest/1353/problem/B

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    int minv=1e8,minind=-1,maxv=-1e8,maxind=-1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      sum+=a[i];
      if(minv>a[i])minv=a[i],minind=i;
    }
    for(int i=0;i<n;i++)
    {
      cin>>b[i];
      if(maxv<b[i])maxv=b[i],maxind=i;
    } 
    for(int i=0;i<k;i++)
    {
      if(minv<maxv)
      {
        a[minind]=maxv;
        b[maxind]=minv;
        sum+=maxv-minv;
        minv=1e8,maxv=-1e8;
        for(int i=0;i<n;i++)
        {
          if(minv>a[i])minv=a[i],minind=i;
        }
        for(int i=0;i<n;i++)
        {
          if(maxv<b[i])maxv=b[i],maxind=i;
        }
      }
    }
    cout<<sum<<endl;
  }
}