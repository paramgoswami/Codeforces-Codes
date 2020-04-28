//https://codeforces.com/contest/459/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() 
{
  long long int n;
  cin>>n;
  long long int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a,a+n);
  long long val1=a[n-1]-a[0];
  long long int max1=0,max2=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]==a[0])max2++;
    if(a[i]==a[n-1])max1++;
  }
  long long val2=max1*max2;
  if(a[n-1]==a[0])val2=n*(n-1)/2;
  cout<<val1<<" "<<val2<<endl;
}