//https://codeforces.com/contest/165/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool left(set<pair<int,int> >s,int x,int y)
{
  int xind=x-1;
  while(xind>=-1000)
  {
    if(s.count({xind,y})==1)return true;
    xind--;
  }
  return false;
}

bool top(set<pair<int,int> >s,int x,int y)
{
  int yind=y+1;
  while(yind<=1000)
  {
    if(s.count({x,yind}))return true;
    yind++;
  }
  return false;
}

bool right(set<pair<int,int> >s,int x,int y)
{
  int xind=x+1;
  while(xind<=1000)
  {
    if(s.count({xind,y}))return true;
    xind++;
  }
  return false;
}

bool low(set<pair<int,int> >s,int x,int y)
{
  int yind=y-1;
  while(yind>=-1000)
  {
    if(s.count({x,yind}))return true;
    yind--;
  }
  return false;
}

void func()
{
  int n;
  cin>>n;
  int ans=0;
  int a[n],b[n];
  set<pair<int,int> >pts;
  for(int i=0;i<n;i++)
  {
    cin>>a[i]>>b[i];
    pts.insert({a[i],b[i]});
  }
  for(int i=0;i<n;i++)
  {
    if((left(pts,a[i],b[i]))&&(top(pts,a[i],b[i]))&&(right(pts,a[i],b[i]))&&(low(pts,a[i],b[i])))ans++;
  }
  cout<<ans;
}

int main() 
{
  int t=1;
  while(t--)
  {
    func();
  }
}