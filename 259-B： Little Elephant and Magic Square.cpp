//https://codeforces.com/contest/259/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  int a[3][3];
  for(int i=0;i<3;i++)
  for(int j=0;j<3;j++)cin>>a[i][j];
  int x,y,z;
  int t=a[0][2]+a[2][0];
  y=(2*t+a[0][1]+a[2][1])/2-a[1][0]-a[1][2];
  x=a[1][0]+a[1][2]+y-a[0][1]-a[0][2];
  z=t-x;
  a[0][0]=x,a[1][1]=y,a[2][2]=z;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)cout<<a[i][j]<<" ";
    cout<<endl;
  }
  //cout<<t<<" "<<x<<" "<<y<<" "<<z; 
}
int main() 
{
  func();
}