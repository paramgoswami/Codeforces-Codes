//https://codeforces.com/contest/1/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  long long int m,n,a;
  cin>>m>>n>>a;
  long long int z;
  long long int x=(m%a==0)?m/a:(1+m/a);
  long long int y=(n%a==0)?n/a:(1+n/a);
  z=x*y;
  cout<<z<<endl;
}