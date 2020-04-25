//https://codeforces.com/contest/1332/problem/A

#include <iostream>
#include<bits/stdc++.h>

bool func(long long int a,long long int a1,long long int a2)
{
  return ((a<=a1)&&(a>=a2))||((a>=a1)&&(a<=a2));
}

using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--)
  {
    long long int a,b,c,d,x,y,x1,y1,x2,y2;
    cin>>a>>b>>c>>d;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    long long int X,Y,i,j;
    X=x+b-a;
    Y=y+d-c;
    int count =0;
    if(func(x,x1,x2))
    {
      if(func(y,y1,y2))
      {
        if(func(X,x1,x2))
        {
          if(func(Y,y1,y2))
          {
            if(b>=a && func(x+1,x1,x2))
            {
              if(d>=c && func(y+1,y1,y2)) 
              {
                count=1;
              }
              if(d<=c && func(y-1,y1,y2)) {count=1;}
            }
            if(b<=a && func(x-1,x1,x2))
            {
              if(d>=c && func(y+1,y1,y2)) {count=1;}
              if(d<=c && func(y-1,y1,y2)) {count=1;}
            }
            if((a==0)&&(b==0))
            {
              if(d>=c && func(y+1,y1,y2)) 
              {
                count=1;
              }
              if(d<=c && func(y-1,y1,y2)) {count=1;}
            }
            if((c==0)&&(d==0))
            {
              if(b>=a && func(x+1,x1,x2))
              {
                count=1;
              }
              if(b<=a && func(x-1,x1,x2))
              {
                count=1;
              }
            }
          }
        }
      }
    }
    if(count==1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
}