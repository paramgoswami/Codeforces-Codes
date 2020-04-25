//https://codeforces.com/contest/1343/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int temp=1;
    int c=0;
    for(int k=2;(k<31)&&(c==0);k++)
    {
      temp=(temp+1)*2-1;
      if(n%temp==0)
      {
        cout<<n/temp<<endl;
        c=1;
      }
    }
  }
}