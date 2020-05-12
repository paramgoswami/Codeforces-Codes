//https://codeforces.com/contest/94/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  string s,t;
  cin>>s;
  string a[10];
  map<string,int> x;
  for(int i=0;i<10;i++)
  {
    cin>>a[i];
    x[a[i]]=i;
  }
  vector<int> ans(8);
  for(int i=0;i<8;i++)
  {
    t=s.substr(10*i,10);
    //cout<<i<<" "<<t<<endl;;
    //if(x.find(t)==x.end())cout<<"ÿ";
    ans[i]=x[t];
  }
  for(int i=0;i<8;i++)cout<<ans[i];
}