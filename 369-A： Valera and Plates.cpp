//https://codeforces.com/contest/369/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;

int main()
{
  int n,m,k;
  cin>>n>>m>>k;
  int a[n];
  int b=0,c=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]==1)b++;
    else c++;
  }
  c=(c>k)?c-k:0;
  b=(b+c>m)?b+c-m:0;
  cout<<b;
}