//https://codeforces.com/contest/352/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  int a=0,b=0;
  int temp;
  for(int i=0;i<n;i++)
  {
    cin>>temp;
    if(temp==0)a++;
    else b++;
  }
  if(a==0)
  {
    cout<<"-1"<<endl;
  }
  else
  {
    int c=b/9;
    string s="";
    if(c==0)cout<<"0"<<endl;
    else
    {
      for(int i=0;i<9*c;i++)s+="5";
      for(int i=0;i<a;i++)s+="0";
      cout<<s<<endl;
    }
  }
}