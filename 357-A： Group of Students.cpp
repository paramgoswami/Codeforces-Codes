//https://codeforces.com/contest/357/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int m;
  cin>>m;
  int tot=0;
  int a[m];
  for(int i=0;i<m;i++){cin>>a[i];tot+=a[i];}
  int x,y;
  cin>>x>>y;
  int pref=0,rem;
  for(int i=0;i<m;i++)
  {
    pref+=a[i];
    rem=tot-pref;
    //cout<<i<<" "<<pref<<" "<<rem<<endl;
    int less=min(rem,pref);
    int more=max(rem,pref);
    if((more<=y)&&(less>=x)){cout<<(i+2);return 0;}
  }
  cout<<0;
}