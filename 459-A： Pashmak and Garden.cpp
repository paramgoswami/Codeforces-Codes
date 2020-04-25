//https://codeforces.com/contest/459/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() 
{
  int x1,x2,y1,y2;
  int x3,y3,x4,y4;
  int c=0;
  cin>>x1>>y1>>x2>>y2;
  if(x1==x2)
  {
    y3=y1;y4=y2;
    if((x1+y4-y3<=1000) && (x1+y4-y3>=-1000))
    {
      x3=x1+y4-y3;
      x4=x3;
    }
    else
    {
      x3=x1+y3-y4;
      x4=x3;
    }
  }
  else if(y1==y2)
  {
    x3=x1,x4=x2;
    if((y1+x3-x2<=1000) &&(y1+x3-x2>=-1000))
    {
      y3=y1+x3-x2;
      y4=y3;
    }
    else{
      y3=y1+x2-x3;
      y4=y1;
    }
  }
  else
  {
    if(abs(x1-x2)==abs(y1-y2))
    {
      x3=x1;y3=y2;
      x4=x2;y4=y1;
    }
    else c++;
  }
  if(c) cout<<-1<<endl;
  else cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
}