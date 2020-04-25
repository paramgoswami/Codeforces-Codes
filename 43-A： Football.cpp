//https://codeforces.com/contest/43/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string t;
  map<string,int> x;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>t;
    x[t]++;
  }
  int max=-1;
  for(auto it=x.begin();it!=x.end();it++)
  {
    if(max<it->second)
    {
      max=it->second;
      t=it->first;
    }
  }
  cout<<t<<endl;
}