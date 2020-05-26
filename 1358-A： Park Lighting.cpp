//https://codeforces.com/contest/1358/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    int x=n*m;
    if(x%2==0)cout<<x/2;
    else cout<<x/2+1;
    cout<<endl;
  }
}