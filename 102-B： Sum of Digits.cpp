//https://codeforces.com/contest/102/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func(int n)
{
  int i=1;
  while(n>=10)
  {
    int t=n,sum=0;
    while(t)
    {
      sum+=t%10;
      t/=10;
    }
    n=sum;
    i++;
  }
  cout<<i<<endl;
}

int main() {
  string s;
  int sum=0;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
    sum+=(int)s[i]-48;
  }
  if(sum<10)
  {
    if(s.length()>1)cout<<"1"<<endl;
    else cout<<"0"<<endl;
  }
  else func(sum);
}