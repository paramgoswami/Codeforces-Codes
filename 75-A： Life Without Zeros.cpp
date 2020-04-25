//https://codeforces.com/contest/75/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int func(long long int n)
{
  long long int ret=0;
  long long int ten=1,dig;
  while(n)
  {
    dig=n%10;
    n/=10;
    if(dig)
    {
      ret+=ten*dig;
      ten*=10;
    }
  }
  return ret;
}

int main() {
  long long int a,b,c;
  cin>>a>>b;
  c=a+b;
  long long int x,y,z;
  x=func(a);
  y=func(b);
  z=func(c);
  if(x+y==z)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}