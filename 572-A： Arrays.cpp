//https://codeforces.com/contest/572/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
  int n1,n2;
  cin>>n1>>n2;
  int k,m;
  cin>>k>>m;
  int a[n1],b[n2];
  for(int i=0;i<n1;i++)cin>>a[i];
  for(int i=0;i<n2;i++)cin>>b[i];
  reverse(b,b+n2);
  if(b[m-1]>a[k-1])cout<<"YES";
  else cout<<"NO";
}