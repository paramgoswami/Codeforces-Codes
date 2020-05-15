//https://codeforces.com/contest/355/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() 
{
  int k,d;
  cin>>k>>d;
  string s;
  if(d!=0)
  {
    char c=d+'0';
    s+=c;
    for(int i=1;i<k;i++)s+="0";
    cout<<s;
  }
  else
  {
    if(k==1)cout<<"0";
    else cout<<"No solution";
  }
}