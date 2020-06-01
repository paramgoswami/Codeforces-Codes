//https://codeforces.com/contest/469/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  set<int> s;
  int p,t,q;cin>>p;
  for(int i=0;i<p;i++)
  {
    cin>>t;s.insert(t);
  }
  cin>>q;
  for(int i=0;i<q;i++)
  {
    cin>>t;s.insert(t);
  }
  if(s.size()==n)cout<<"I become the guy.";
  else cout<<"Oh, my keyboard!";
}