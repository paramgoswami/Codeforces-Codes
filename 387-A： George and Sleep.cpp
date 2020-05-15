//https://codeforces.com/contest/387/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
  string s,t,s1,s2,t1,t2,ans;
  cin>>s>>t;
  int a,b,c,d;
  s1=s.substr(0,2);
  s2=s.substr(3,2);
  t1=t.substr(0,2);
  t2=t.substr(3,2);
  stringstream geek(s1);
  geek>>a;
  stringstream geek1(s2);
  geek1>>b;
  stringstream geek2(t1);
  geek2>>c;
  stringstream geek3(t2);
  geek3>>d;
  //cout<<a<<" "<<b<<" "<<c<<" "<<d;
  int s0,t0,ans0,ans1,ans2;
  s0=a*60+b;
  t0=c*60+d;
  if(s0>=t0)ans0=s0-t0;
  else ans0=s0-t0+60*24;
  //cout<<" Ans 0 ="<<ans0<<endl;
  ans1=ans0/60;
  ans2=ans0%60;
  string a1,b1;
  if(ans1%10==ans1)a1="0"+to_string(ans1);
  else a1=to_string(ans1); 
  if(ans2%10==ans2)b1="0"+to_string(ans2);
  else b1=to_string(ans2);
  ans=a1+":"+b1;
  cout<<ans;
}