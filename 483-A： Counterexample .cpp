//https://codeforces.com/contest/483/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  long long int l,r;
  cin>>l>>r;
  if(l%2!=0)l++;
  long long int diff=(r-l+1);
  if(diff>=3)
  {
    cout<<l<<" "<<l+1<<" "<<l+2;
  }
  else cout<<"-1";
}

int main() 
{
  int t=1;
  while(t--)
  {
    func();
  }
}