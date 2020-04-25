//https://codeforces.com/contest/118/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  for(int i=1;i<=2*n+1;i++)
  {
    if(i<=n)
    {
      for(int j=1;j<=2*(n+1-i);j++)cout<<" ";
      for(int j=0;j<i;j++)
      {
        cout<<j;
        if(i!=1)cout<<" "; 
      }
      if(i!=1)
      {
        for(int j=i-2;j>=0;j--)
        {
          cout<<j;
          if(j)cout<<" ";
        }
      }
    }
    if(i==n+1)
    {
      for(int i=0;i<=n;i++)
      {
        cout<<i<<" ";
      }
      for(int j=n-1;j>=0;j--)
      {
        cout<<j;
        if(j)cout<<" ";
      }
    }
    if(i>n+1)
    {
      int x=2*n+2-i;
      for(int j=1;j<=2*(n+1-x);j++)cout<<" ";
      for(int j=0;j<x;j++)
      {
        cout<<j;
        if(x!=1)cout<<" "; 
      }
      if(x!=1)
      {
        for(int j=x-2;j>=0;j--)
        {
          cout<<j;
          if(j)cout<<" ";
        }
      }
    }
    cout<<endl;
  }
  //std::cout << "Hello World!\n";
}