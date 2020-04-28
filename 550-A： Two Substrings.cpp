//https://codeforces.com/contest/550/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() 
{
  int n;
  string s;
  cin>>s;
  n=s.length();
  int x=-1,y=-1;
  string s1,s2;
  int a=s.find("AB");
  //cout<<a;
  if((a<n-2)&&(a>=0))
  {
    s1=s.substr(a+2);
    //cout<<s1<<endl;
    if(s1.find("BA")!=string::npos){cout<<"YES";return 0;}
  }
  a=s.find("BA");
  if((a<n-2)&&(a>=0))
  {
    s1=s.substr(a+2);
    if(s1.find("AB")!=string::npos){cout<<"YES";return 0;}
  }
  cout<<"NO"<<endl;
  
}