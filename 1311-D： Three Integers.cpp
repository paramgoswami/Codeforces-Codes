//https://codeforces.com/contest/1311/problem/D

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    int A=-1,B=-1,C=-1;
    int ans=1e9;
    for(int i=1;i<=2*a;i++)
    {
      for(int j=i;j<=2*b;j+=i)
      {
        for(int k=0;k<2;k++)
        {
          int z=j*(c/j)+k*j;
          int val=abs(i-a)+abs(j-b)+abs(z-c);
          if(val<ans)
          {
            A=i,B=j,C=z;
            ans=val;
          }
        }
      }
    }
    cout<<ans<<endl<<A<<" "<<B<<" "<<C<<endl;
  }
  return 0;
}