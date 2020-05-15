//https://codeforces.com/contest/106/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
  char c;
  cin>>c;
  string a,b;
  cin>>a>>b;
  int x,y;
  if(a[0]=='6')x=6;
  else if(a[0]=='7')x=7;
  else if(a[0]=='8')x=8;
  else if(a[0]=='9')x=9;
  else if(a[0]=='T')x=10;
  else if(a[0]=='J')x=11;
  else if(a[0]=='Q')x=12;
  else if(a[0]=='K')x=13;
  else if(a[0]=='A')x=14;
  
  if(b[0]=='6')y=6;
  else if(b[0]=='7')y=7;
  else if(b[0]=='8')y=8;
  else if(b[0]=='9')y=9;
  else if(b[0]=='T')y=10;
  else if(b[0]=='J')y=11;
  else if(b[0]=='Q')y=12;
  else if(b[0]=='K')y=13;
  else if(b[0]=='A')y=14;

  if(a[1]==b[1])
  {
    if(x>y)cout<<"YES";
    else cout<<"NO";
  }
  else if(a[1]==c)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }
}