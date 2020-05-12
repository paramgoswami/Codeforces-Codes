//https://codeforces.com/contest/408/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int n;
  cin>>n;
  int k[n];
  for(int i=0;i<n;i++)cin>>k[i];
  vector<vector<int> >m(n);
  int temp;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<k[i];j++)
    {
      cin>>temp;
      m[i].push_back(temp);
    }
  }
  vector<int> count(n);
  int minv=1e8;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<k[i];j++)
    {
      count[i]+=5*m[i][j]+15;
    }
    minv=min(minv,count[i]);
  }
  cout<<minv<<endl;
}