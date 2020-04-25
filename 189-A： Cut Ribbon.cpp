//https://codeforces.com/contest/189/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n,a,b,c;
  cin>>n>>a>>b>>c;
  int ans=0,temp1,temp2;
  int min1,min2,min3;
  min1=min(min(a,b),c);
  min3=max(max(a,b),c);
  min2=a+b+c-min1-min3;
  for(int i=0;i<=n/min3;i++)
  {
    temp1=n-i*min3;
    for(int j=0;j<=temp1/min2;j++)
    {
      temp2=temp1-j*min2;
      if(temp2%min1==0)ans=max(ans,i+j+temp2/min1);
    }
  }
  cout<<ans<<endl;
}