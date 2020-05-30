//https://codeforces.com/contest/385/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  string s;
  cin>>s;
  n=s.length();
  int count=0;
  for(int i=0;i<n;i++)
  {
    int x=s.find("bear",i);
    if(x!=-1)count+=n-x-3;
  }
  cout<<count;
}