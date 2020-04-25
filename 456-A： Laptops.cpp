//https://codeforces.com/contest/456/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() 
{
  int n;
  cin>>n;
  int x[n][2],ct=0;
  for(int i=0;i<n;i++)
  {
    cin>>x[i][0]>>x[i][1];
    if(x[i][0]!=x[i][1])ct++;
  }
  if(ct==0)cout<<"Poor Alex"<<endl;
  else cout<<"Happy Alex"<<endl;
}