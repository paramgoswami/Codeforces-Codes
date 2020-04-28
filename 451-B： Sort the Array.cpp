//https://codeforces.com/contest/451/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool sorted(int a[],int n)
{
  int i=1;
  for(int i=1;i<n;i++)
  {
    if(a[i]<a[i-1])return false;
  }
  return true;
}
int main() 
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  int i=1,l,r;
  while((i<n)&&(a[i]>a[i-1])) i++;l=i;
  while((i<n)&&(a[i]<a[i-1])) i++;r=i;
  reverse(a+l-1,a+r);
  if(sorted(a,n))
  {
    cout<<"yes"<<endl<<l<<" "<<r<<endl;
  }
  else cout<<"no"<<endl;
}