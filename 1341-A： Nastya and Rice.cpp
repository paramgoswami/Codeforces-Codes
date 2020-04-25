//https://codeforces.com/contest/1341/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    int max_tot=c+d;
    int min_tot=c-d;
    int max_one=n*(a+b);
    int min_one=n*(a-b);
    int ct=0;
    for(int i=max_tot;(i>=min_tot)&&(ct==0);i--)
    {
      if((i<=max_one)&&(i>=min_one))
      {
        cout<<"Yes"<<endl;ct=1;
      }
    }
    if(ct==0)cout<<"No"<<endl;
  }
}