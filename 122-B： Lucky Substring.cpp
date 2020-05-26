//https://codeforces.com/contest/122/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  string s;
  cin>>s;
  int c4=0,c7=0;
  for(int i=0;i<s.length();i++)
  {
    int dig=s[i]-'0';
    if(dig==4)c4++;
    if(dig==7)c7++;
  }
  if(c4==0&&c7==0)cout<<"-1"<<endl;
  else if(c4>=c7)cout<<"4"<<endl;
  else cout<<"7"<<endl;
}