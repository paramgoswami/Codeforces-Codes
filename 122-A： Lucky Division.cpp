//https://codeforces.com/contest/122/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int func(int n, vector<int> v)
{
  for(int i=0;i<v.size();i++)
  {
    if(n%v[i]==0)return 1;
  }
  return 0;
}

int main() {
  vector<int> v;
  v.push_back(4);
  v.push_back(7);
  v.push_back(44);
  v.push_back(77);
  v.push_back(47);
  v.push_back(74);
  v.push_back(444);
  v.push_back(447);
  v.push_back(474);
  v.push_back(477);
  v.push_back(744);
  v.push_back(747);
  v.push_back(774);
  v.push_back(777);
  int n;
  cin>>n;
  int x=func(n,v);
  if(x) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}