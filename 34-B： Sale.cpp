//https://codeforces.com/contest/34/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,m;
  cin>>n>>m;
  int a[n];
  int p=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]<0)p++;
  }
  sort(a,a+n);
  int q=min(p,m);
  int sum=0;
  for(int i=0;i<q;i++)
  {
    sum-=a[i];
  }
  cout<<sum<<endl;
}