//https://codeforces.com/contest/110/problem/B

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() 
{
  int n;
  cin>>n;
  string s="";
  for(int i=0;i<n;i++)
  {
    if(i%4==0)s+="a";
    if(i%4==1)s+="b";
    if(i%4==2)s+="c";
    if(i%4==3)s+="d";
  }
  cout<<s;
}