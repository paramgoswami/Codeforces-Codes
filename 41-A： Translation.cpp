//https://codeforces.com/contest/41/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string s1,s2,s3;
  cin>>s1>>s3;
  s2="";
  for(int i=s1.length()-1;i>=0;i--)
  {
    s2+=s1[i];
  }
  if(s2.compare(s3)==0)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}