//https://codeforces.com/contest/29/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int n;
  cin>>n;
  int a[n],d[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i]>>d[i];    
  }
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      int x=a[i]+d[i];
      int y=a[j]+d[j];
      if((x==a[j])&&(y==a[i]))
      {
        cout<<"YES"<<endl;
        return 0;
      }
    }
  }
  cout<<"NO"<<endl;
}