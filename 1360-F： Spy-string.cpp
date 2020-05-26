//https://codeforces.com/contest/1360/problem/F

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  int n,m;
  cin>>n>>m;
  vector<string> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  string s="";
  for(int i=0;i<m;i++)
  {
    s="";
    for(int j=0;j<26;j++)
    {
      char c=j+'a';
      s=v[0].substr(0,i)+c+v[0].substr(i+1,m-i-1);
      int count=0,ct=0;
      for(int k=1;(k<n)&&(count<=1);k++)
      {
        count=0;
        for(int a=0;a<m;a++)
        {
          if(v[k][a]!=s[a])count++;
        }
        if(count<=1)ct++;
      }
      if(ct==(n-1))
      {
        cout<<s<<endl;
        return;
      }
    }
  }
  cout<<"-1"<<endl;
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