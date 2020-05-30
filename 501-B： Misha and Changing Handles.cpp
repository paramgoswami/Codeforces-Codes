//https://codeforces.com/contest/501/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int q;
  cin>>q;
  string o,n;
  map<string,string> v;
  for(int i=0;i<q;i++)
  {
    cin>>o>>n;
    if(v.count(o)==0)v[n]=o;
    else
    {
      v[n]=v[o];
      v.erase(o);
    }
  }
  cout<<v.size()<<endl;
  for(auto it:v)
  {
    cout<<it.second<<" "<<it.first<<"\n";
  }
}