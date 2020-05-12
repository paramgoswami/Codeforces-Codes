//https://codeforces.com/contest/265/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  string s,t;
  cin>>s;
  cin>>t;
  int i=0;
  for(int j=0;j<t.length();j++)if(s[i]==t[j])i++;
  cout<<1+i<<endl;
  
}