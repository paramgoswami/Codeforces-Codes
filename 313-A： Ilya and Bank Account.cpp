//https://codeforces.com/contest/313/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  if(n>=0)cout<<n;
  else
  {
    int d1,d2;
    d1=n/10;
    d2=(n/100)*10+n%10;
    cout<<max(d1,d2);
  }
}