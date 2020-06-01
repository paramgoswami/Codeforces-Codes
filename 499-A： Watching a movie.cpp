//https://codeforces.com/contest/499/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  int n;
  cin>>n;
  long long int l,r,x,currpos=1,temppos,ans=0;
  cin>>x;
  for(int i=0;i<n;i++)
  {
    cin>>l>>r;
    temppos=currpos+((l-currpos)/x)*x;
    ans+=r-temppos+1;
    //cout<<temppos<<" "<<ans<<"\n";
    currpos=r+1;
  }
  cout<<ans;
}

int main() 
{
  int t=1;
  while(t--)
  {
    func();
  }
}