//https://codeforces.com/contest/263/problem/B

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  reverse(a,a+n);
  if((a[k-1]==a[k])||(k>n))cout<<"-1";
  else 
  {
    cout<<a[k-1]<<" "<<a[k-1];
  }
}