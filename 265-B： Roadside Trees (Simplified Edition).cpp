//https://codeforces.com/contest/265/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  int curr_height=0;
  int moves=a[0];
  for(int i=0;i<n;i++)
  {
    if(i!=0)moves++;
    moves++;
    if(i!=n-1)moves+=abs(a[i+1]-a[i]);
  }
  cout<<moves;
}