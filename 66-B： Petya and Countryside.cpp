//https://codeforces.com/contest/66/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;cin>>n;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  int maxcount=-1e8;
  for(int i=0;i<n;i++)
  {
    //cout<<i<<"   ";
    int j=i-1,curr=a[i];
    int count =1;
    while((j>=0)&&(curr>=a[j]))
    {
      //cout<<j<<" ";
      count++;
      curr=a[j];
      j--;
    }
    curr=a[i],j=i+1;
    while((j<n)&&(curr>=a[j]))
    {
      //cout<<j<<" ";
      curr=a[j];
      count++,j++;
    }
    //cout<<count<<endl;
    maxcount=max(maxcount,count);
  }
  cout<<maxcount;
}