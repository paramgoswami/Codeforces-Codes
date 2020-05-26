//https://codeforces.com/contest/515/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  long long int a,b,s,x;
  cin>>a>>b>>s;
  a=abs(a),b=abs(b);
  x=abs(a+b-s);
  if((s>=a+b)&&(x%2==0))cout<<"Yes";
  else cout<<"No";
}