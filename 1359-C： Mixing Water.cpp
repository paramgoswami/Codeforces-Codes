//https://codeforces.com/contest/1359/problem/C

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    double h,c,t;
    cin>>h>>c>>t;
    if(t<=(h+c)/2)cout<<"2"<<endl;
    else if(t>=h)cout<<"1"<<endl;
    else
    {
      int m=(t-c)/(2*t-c-h);
      double error1,error2,t1,t2;
      t1=(m*h+(m-1)*c)/(2*m-1);
      t2=((m+1)*h+(m)*c)/(2*m+1);
      //cout<<m<<" "<<t1<<" "<<t2<<" ";
      error1=abs(t1-t),error2=abs(t2-t);
      int x;
      if(error1<=error2)x=2*m-1;
      else x=2*m+1;
      cout<<x<<endl;
    }
  }
}