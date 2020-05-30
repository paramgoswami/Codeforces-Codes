//https://codeforces.com/contest/552/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  long long int n;cin>>n;
  long long int ans=0;
  long long int dig=1,count=0;
  while(1)
  {
    if(n>=pow(10,dig))
    {
      count+=9*pow(10,dig-1)*dig;
      //cout<<count<<" "<<endl;
      dig++;
    }
    else
    {
      long long int t=dig-2,val=0;
      while(t>=0)val+=9*pow(10,t),t--;
      //cout<<val<<endl;
      count+=(n-val)*dig;
      cout<<count;
      return 0;
    }
  }
}