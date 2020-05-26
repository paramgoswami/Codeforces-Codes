//https://codeforces.com/contest/400/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  string s;
  cin>>s;
  int a[]={1,2,3,4,6,12};
  int count=0;
  vector<int> v;
  for(int i=0;i<6;i++)
  {
    int rows=a[i];
    int cols=12/a[i];
    int ct=0;
    for(int j=0;(j<cols)&&(ct==0);j++)
    {
      int temp=0;
      for(int k=0;k<rows;k++)
      {
        if(s[j+k*cols]=='X')temp++;
      }
      if(temp==rows)ct=1;
    }
    if(ct==1)v.push_back(a[i]);
    count+=ct;
  }
  cout<<count<<" ";
  for(int i=0;i<v.size();i++)cout<<v[i]<<"x"<<12/v[i]<<" ";
  cout<<endl;
  return;
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