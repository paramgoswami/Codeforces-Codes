//https://codeforces.com/contest/202/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int n;
  string s,ans;
  cin>>s;
  n=s.length();
  sort(s.begin(),s.end());
  reverse(s.begin(),s.end());
  ans="";
  int i=0;
  while((s[i]==s[0])&&(i<n))
  {
    ans+=s[0];
    i++;
  }
  cout<<ans;
}
