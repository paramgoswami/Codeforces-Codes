//https://codeforces.com/contest/168/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,x,y,intp;
  cin>>n>>x>>y;
  double persons;
  persons=((double)y)*n/100;;
  if(double(persons-(int)persons)==0)intp=persons;
  else
  intp=persons+1;
  if(x>=intp)cout<<"0"<<endl;
  else cout<<intp-x<<endl;
}