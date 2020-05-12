//https://codeforces.com/contest/255/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int n;
  cin>>n;
  int a;
  vector<int> b(3);
  for(int i=0;i<n;i++)
  {
    cin>>a;
    b[(i+1)%3]+=a;
  }
  int v=max(max(b[0],b[1]),b[2]);
  if(v==b[0])cout<<"back";
  else if(v==b[1])cout<<"chest";
  else cout<<"biceps";
}