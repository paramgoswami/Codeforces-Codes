//https://codeforces.com/contest/1360/problem/C

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  int n;
  cin>>n;
  int a[n];
  int cev=0,codd=0;
  set<int> x;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    x.insert(a[i]);
    if(a[i]%2==0)cev++;
    else codd++;
  }
  //for(int v:x)cout<<v<<" ";
  //cout<<endl;
  if(codd%2==0){cout<<"YES"<<endl;return;}
  else
  {
    for(int i=0;i<n;i++)
    {
      int t=a[i];
      //cout<<t<<" "<<t<<endl;
      if((x.count(t+1)==1) ||(x.count(t-1)==1))
      {
        cout<<"YES"<<endl;
        return;
      }
    }
    cout<<"NO"<<endl;
    return;
  }
}

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    func();
  }
}