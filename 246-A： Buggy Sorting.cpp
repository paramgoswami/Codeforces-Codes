//https://codeforces.com/contest/246/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;

int main()
{
  int n;
  cin>>n;
  if(n<=2)cout<<"-1";
  else
  {
    for(int i=n;i>=1;i--)cout<<i<<" ";
  }
}