//https://codeforces.com/contest/499/problem/B

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
  int n,m;
  cin>>n>>m;
  map<string,string> a;
  string input,output="";
  string x,y;
  for(int i=0;i<m;i++)
  {
    cin>>x>>y;
    a[x]=y;
  }
  for(int i=0;i<n;i++)
  {
    cin>>input;
    x=a[input];
    if(x.length()<input.length())y=x;
    else y=input;
    if(i==0)output+=y;
    else output+=" "+y;
  }
  cout<<output<<endl;
}