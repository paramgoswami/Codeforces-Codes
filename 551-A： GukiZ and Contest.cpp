//https://codeforces.com/contest/551/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int n;
  cin>>n;
  vector<int> a(n);
  int r[n],temp;
  vector<int>x;
  set<int>s;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(s.count(a[i])==0)
    {
      x.push_back(a[i]);
  	  s.insert(a[i]);
    }
  }
  sort(x.begin(),x.end());
  int val=1;
  for(int i=x.size()-1;i>=0;i--)
  {
    temp=0;
    for(int j=0;j<n;j++)
    {
      if(x[i]==a[j])r[j]=val,temp++;
    }
    val+=temp;
  }
  for(int i=0;i<n;i++)cout<<r[i]<<" ";
}