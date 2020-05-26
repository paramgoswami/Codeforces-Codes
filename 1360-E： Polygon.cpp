//https://codeforces.com/contest/1360/problem/E

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool func1(vector<vector<int> >v,int n)
{
  for(int i=0;i<n;i++)
  {
    if(v[i][n-1]==1)return true;
    if(v[n-1][i]==1)return true;
  }
  return false;
}

bool func2(vector<vector<int> >a,int n)
{
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-1;j++)
    {
      if(a[i][j]==1)
      {
        if((a[i+1][j]==1)||(a[i][j+1]==1))
        {}
        else return false;
      }
    }
  }
  return true;
}
bool func3(vector<vector<int> >a, int n)
{
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      if(a[i][j]==1)return false;
  
  return true;
}
int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<vector<int> > v(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        char c;
        cin>>c;
        int temp=c-'0';
        v[i][j]=temp;
      }
    }
    if(((func1(v,n)==true)&&(func2(v,n)==true))||(func3(v,n)==true))
    {
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }
}