//https://codeforces.com/contest/490/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  vector<int>v1,v2,v3;
  for(int i=1;i<=n;i++)
  {
    int a;
    cin>>a;
    if(a==1)v1.push_back(i);
    if(a==2)v2.push_back(i);
    if(a==3)v3.push_back(i);
  }
  int y=min(v3.size(),min(v1.size(),v2.size()));
  cout<<y<<endl;
  for(int i=0;i<y;i++)
  {
    cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
  }
}