//https://codeforces.com/contest/339/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n,m;
  cin>>n>>m;
  long long int a[m];
  long long int x=1,ct=0;
  for(long long int i=0;i<m;i++){
    cin>>a[i];
    if(a[i]>=x)ct+=a[i]-x;
    else ct+=n-x+a[i];
    x=a[i];
  }
  cout<<ct<<endl;
}