//https://codeforces.com/contest/1359/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,k,cards;
    cin>>n>>m>>k;
    cards=n/k;
    int mj=min(m,cards),rj;
    rj=m-mj;
    int mrj=(rj%(k-1)==0)?rj/(k-1):(1+rj/(k-1));
    //cout<<mj<<" "<<mrj<<" "<<rj<<" ";
    cout<<mj-mrj<<endl;
  }
}