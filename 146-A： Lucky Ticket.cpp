//https://codeforces.com/contest/146/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
bool func(string s)
{
  int n=s.length();
  for(int i=0;i<n;i++)
  {
    int d=s[i]-'0';
    if((d==4)||(d==7)){}
    else return false;
  }
  return true;
}
int main() 
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  if(func(s))
  {
    int sum1=0,sum2=0;
    for(int i=0;i<n/2;i++)
    {
      sum1+=s[i]-'0';
      sum2+=s[n/2+i]-'0';
    }
    if(sum1==sum2)cout<<"YES";
    else cout<<"NO";
  }
  else cout<<"NO";
}