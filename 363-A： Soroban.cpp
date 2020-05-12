//https://codeforces.com/contest/363/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int n;
  cin>>n;
  if(n==0){cout<<"O-|-OOOO"<<endl;return 0;}
  while(n)
  {
    int dig=n%10;
    n=n/10;
    if(dig<5)
    cout<<"O-|";
    else cout<<"-O|";
    int x=dig%5;
    for(int i=0;i<x;i++)cout<<"O";
    cout<<"-";
    for(int i=0;i<4-x;i++)cout<<"O";
    cout<<endl;
  }
}