//https://codeforces.com/contest/404/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  char a[n][n];
  set<char> s,s2,s3;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
      if(i==j)s.insert(a[i][j]);
    }
  }
  if(s.size()!=1)
  {
    cout<<"NO"<<endl;
    return 0;  
  }
  for(int i=0;i<n;i++)
  {
    char c=a[i][n-1-i];
    if(s.count(c)!=1)
    {
      cout<<"NO"<<endl;
      return 0;
    }
    s2.insert(c);
  }
  if(s.size()!=s2.size())
  {
    cout<<"NO"<<endl;
    return 0;
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if((j!=i)&&(j!=n-1-i))
      {
        char c=a[i][j];
        if(s.count(c)==1)
        {
          cout<<"NO"<<endl;
          return 0;
        }
        s3.insert(c);
      }
    }
  }
  if(s3.size()!=1)
  {
    cout<<"NO"<<endl;
    return 0;
  }
  cout<<"YES"<<endl;
  return 0;
}