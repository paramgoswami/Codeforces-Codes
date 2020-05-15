//https://codeforces.com/contest/441/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
  int n,v;
  cin>>n>>v;
  vector<pair<int,int> >marr(n);
  for(int i=0;i<n;i++)
  {
    int min=1e8;
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
      int t;
      cin>>t;
      if(min>t)min=t;
    }
    marr[i]={min,i};
  }
  sort(marr.begin(),marr.end());
  vector<int> f;
  for(int i=0;i<n;i++)
  {
    if(marr[i].first<v)
    {
      f.push_back(marr[i].second);
    }
  }
  sort(f.begin(),f.end());
  cout<<f.size()<<endl;
  for(int i=0;i<f.size();i++)
  {
    cout<<f[i]+1<<" ";
  }
}