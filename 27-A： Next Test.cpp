//https://codeforces.com/contest/27/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  map<int,int> x;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    x[a[i]]++;
  }
  int count=1;
  for(int i=1;count!=0;i++)
  {
    if(x.find(i)==x.end())
    {
      cout<<i<<endl;
      count=0;
      break;
    }
  }
}