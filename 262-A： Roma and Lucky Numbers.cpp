//https://codeforces.com/contest/262/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;

int func(string s,int k)
{
  int count=0,n=s.length();
  for(int i=0;i<n;i++)
  {
    int x=s[i]-'0';
    if(x==4 || x==7) count++;
  }
  if(count<=k)return 1;
  return 0;
}

int main()
{
  int n,k;
  cin>>n>>k;
  string s[n];
  int count=0;
  for(int i=0;i<n;i++)
  {
    cin>>s[i];
    count+=func(s[i],k);
  }
  cout<<count<<endl;
}