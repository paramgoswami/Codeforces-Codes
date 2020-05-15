//https://codeforces.com/contest/651/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() 
{
  int a,b;
  cin>>a>>b;
  int ans=0;
  int m=min(a,b);
  int n=max(a,b);
  while((m!=0)&&(n>=2))
  {
    m++;
    n-=2;
    ans++;
    int t1=max(m,n);
    int t2=min(m,n);
    n=t1;
    m=t2;
  }
  cout<<ans;
}