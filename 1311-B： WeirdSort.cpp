//https://codeforces.com/contest/1311/problem/B

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int m,n;
    cin>>n>>m;
    int a[n],p[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>p[i];
    int c=m*(m+1)/2;
    while(c>0)
    {
      for(int i=0;i<m;i++)
      {
        if(a[p[i]-1]>a[p[i]])
        {
          int temp=a[p[i]-1];
          a[p[i]-1]=a[p[i]];
          a[p[i]]=temp;
        }
      }
      c--;
    }
    int ct=0;
    for(int i=0;(i<n-1)&&(ct==0);i++)
    {
      if(a[i]>a[i+1])ct=1;
    }
    if(ct==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}