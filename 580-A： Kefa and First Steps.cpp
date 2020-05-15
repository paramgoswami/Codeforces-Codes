//https://codeforces.com/contest/580/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() 
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int m=-1e8;
  int i=0,j=0;
  while((i<n)&&(j<n))
  {
    j=i+1;
    while((a[j]>=a[j-1])&&(j<n))
    {
      j++;
      //cout<<i<<" "<<j<<endl;
    }
    if(m<(j-i))m=j-i;
    i=j;
  }
  cout<<m;
}