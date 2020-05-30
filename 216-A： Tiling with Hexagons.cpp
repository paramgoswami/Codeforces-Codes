//https://codeforces.com/contest/216/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int a,b,c;
  cin>>a>>b>>c;
  int x=a*b+b*c+c*a-a-b-c+1;
  cout<<x;
}