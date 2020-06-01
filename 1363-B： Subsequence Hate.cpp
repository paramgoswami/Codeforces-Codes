//https://codeforces.com/contest/1363/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  string s;
  cin>>s;
  int n=s.length();
  int error=0,merr=1e8;
  string ans="";
  for(int i=0;i<n;i++)
  {
    ans+="1";
    if(ans[i]!=s[i])error++;
  }
  merr=error;
  for(int i=n-1;i>=0;i--)
  {
    ans[i]='0';
    if(s[i]=='1')error++;
    else error--;
    merr=min(merr,error);
  }
  ans="";error=0;
  for(int i=0;i<n;i++)
  {
    ans+="0";
    if(ans[i]!=s[i])error++;
  }
  for(int i=n-1;i>=0;i--)
  {
    ans[i]='1';
    if(s[i]=='0')error++;
    else error--;
    merr=min(error,merr);
  }
  cout<<merr<<endl;
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