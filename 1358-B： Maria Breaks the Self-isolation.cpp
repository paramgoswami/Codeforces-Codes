//https://codeforces.com/contest/1358/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  /*int n,temp;
  cin>>n;
  set<int> s;
  map<int,int> x;
  int count=1;
  for(int i=0;i<n;i++)
  {
    cin>>temp;
    x[temp]++;
    s.insert(temp);
  }
  for(int v:s)
  {
    if((x[v]+count-1)>=v)
    {
      count+=x[v];
    }
    else
    {
      cout<<count<<endl;
      return;
    }
  }
  cout<<count<<endl;
  return;
  */
  int n;
  cin>>n;
  int a[n];
  int mv=-1e8;
  set<int>s;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    s.insert(a[i]);
    mv=max(mv,a[i]);
  }
  if(n==1)
  {
    if(a[0]==1)cout<<"2"<<endl;
    else cout<<"1"<<endl;
    return;
  }
  vector<int> ct(mv+1);
  ct[0]=0;
  for(int i=0;i<n;i++)ct[a[i]]++;
  for(int i=1;i<=mv;i++)ct[i]+=ct[i-1];
  int ans=0;
  for(int v:s)
  {
    if(ct[v]>=v)ans=max(ans,ct[v]);
  }
  cout<<ans+1<<endl;
}

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    func();
  }
}