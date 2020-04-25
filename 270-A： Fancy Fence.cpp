//https://codeforces.com/contest/270/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    float a;
    cin>>a;
    float x=0;
    int i=3;
    while(x<a)
    {
      x=(i-2)*180/(float)i;
      i++;
      //cout<<x<<endl;
    }
    if(x==a)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}