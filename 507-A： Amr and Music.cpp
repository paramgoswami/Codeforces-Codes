//https://codeforces.com/contest/507/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  int t;
  vector<pair<int,int> >a;
  for(int i=0;i<n;i++)
  {
    cin>>t;
    a.push_back({t,i+1});
  }
  sort(a.begin(),a.end());
  int s=0,j=-1;
  for(int i=0;i<n;i++)
  {
    if((s+a[i].first)<=k)s+=a[i].first,j=i;
  }
  cout<<j+1<<endl;
  for(int i=0;i<=j;i++)
  {
    cout<<a[i].second<<" ";
  }
}