//https://codeforces.com/contest/1360/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    int x=max(a,b);
    int y=min(a,b);
    int z=max(x,2*y);
    cout<<z*z<<endl;
  }
}