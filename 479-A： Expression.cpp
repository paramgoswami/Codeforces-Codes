//https://codeforces.com/contest/479/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int a,b,c;
  cin>>a>>b>>c;
  if(a==1)
  {
    if((b==1)&&(c!=1))cout<<2*c;
    if((b==1)&&(c==1))cout<<3;
    if(b!=1)
    {
      if(c==1)cout<<b+2;
      else cout<<b*c+c;
    }
  }
  else if(b==1)
  {
    if(c==1)cout<<2*a;
    else cout<<max(a*c+c,a*c+a);
  }
  else if(c==1)
  {
    cout<<a*b+a;
  }
  else cout<<a*b*c;
}