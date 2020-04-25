//https://codeforces.com/contest/300/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,z=0;
  vector<int>pos,neg;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]>0)pos.push_back(a[i]);
    if(a[i]<0)neg.push_back(a[i]);
    if(a[i]==0) z++;
  }
  vector<int> f,s,t;
  for(int i=0;i<z;i++)
  {
    t.push_back(0);
  }  
  if(pos.size()>0)
  {
    f.push_back(neg[0]);
    s.push_back(pos[0]);
    if(neg.size()>1)
    {
      for(int i=1;i<neg.size();i++)t.push_back(neg[i]);
    }
    if(pos.size()>1)
    {
      for(int i=1;i<pos.size();i++)t.push_back(pos[i]);
    }
  }
  else
  {
    f.push_back(neg[0]);
    s.push_back(neg[1]);
    s.push_back(neg[2]);
    if(neg.size()>3)
    {
      for(int i=3;i<neg.size();i++)t.push_back(neg[i]);
    }  
  }
  cout<<f.size();
  for(int i=0;i<f.size();i++)cout<<" "<<f[i];
  cout<<endl;

  cout<<s.size();
  for(int i=0;i<s.size();i++)cout<<" "<<s[i];
  cout<<endl;
  
  cout<<t.size();
  for(int i=0;i<t.size();i++)cout<<" "<<t[i];
  cout<<endl;
}