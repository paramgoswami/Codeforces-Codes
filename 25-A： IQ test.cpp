//https://codeforces.com/contest/25/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  int temp;
  int x=-1,y=-1;
  int evens=0,odds=0;
  for(int i=0;i<n;i++)
  {
    cin>>temp;
    if(temp%2==1)x=i+1,odds++;
    else y=i+1,evens++; 
  }
  if(odds==1)cout<<x<<endl;
  else cout<<y<<endl;
}