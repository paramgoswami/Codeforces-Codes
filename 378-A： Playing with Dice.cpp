//https://codeforces.com/contest/378/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int a,b;
  cin>>a>>b;
  int x=0,y=0,z=0;
  int d1,d2;
  for(int i=1;i<=6;i++)
  {
    d1=abs(a-i),d2=abs(b-i);
    if(d1>d2)z++;
    else if(d1<d2)x++;
    else y++;
  }
  cout<<x<<" "<<y<<" "<<z;
}
