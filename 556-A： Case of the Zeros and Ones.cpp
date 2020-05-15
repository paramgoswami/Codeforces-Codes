//https://codeforces.com/contest/556/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() 
{
  int n;
  cin>>n;
  string s,t;
  cin>>s;
  int a=0,b=0;
  for(int i=0;i<n;i++)
  {
    int d=s[i]-'0';
    if(d==1)a++;
    else b++;
  }
  cout<<abs(a-b);
}