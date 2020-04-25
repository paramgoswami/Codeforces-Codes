//https://codeforces.com/contest/4/problem/C

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  map<string,int> x;
  string a[n],b[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(x.find(a[i])==x.end())
    {
      b[i]="OK";
    }
    else
    {
      b[i]=a[i]+to_string(x[a[i]]);
    }
    x[a[i]]++;
  }
  for(int i=0;i<n;i++)
  {
    cout<<b[i]<<endl;
  }
}