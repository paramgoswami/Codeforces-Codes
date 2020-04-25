//https://codeforces.com/contest/230/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int s,n;
  cin>>s>>n;
  int t=s,temp1,temp2;
  int c=0;
  vector<pair<int,int> > v;
  for(int i=0;i<n;i++)
  {
    cin>>temp1>>temp2;
    pair<int,int> x=make_pair(temp1,temp2);
    v.push_back(x);
  }
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++)
  {
    if(v[i].first>=t){
      c=1;
      break;
    }
    else
    t+=v[i].second;
  }
  if(c==0)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}