//https://codeforces.com/contest/342/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {
  int n;
  cin>>n;
  int a[n];
  int b[8];
  int t[8];
  int c=0;
  memset(b,0,sizeof(b));
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]==5 || a[i]==7)c++;
    else
    {
      b[a[i]]++;
    }
    t[a[i]]=b[a[i]];
  }
  t[1]=b[1],t[2]=b[2],t[3]=b[3],t[4]=b[4],t[5]=b[5],t[6]=b[6],t[7]=b[7];
  if(c!=0) cout<<-1<<endl;
  else
  {
    if(b[1]!=n/3) cout<<-1<<endl;
    else if(b[4]>b[2])cout<<-1<<endl;
    else if(b[3]>b[6])cout<<-1<<endl;
    else if(b[4]+b[6]==0)cout<<-1<<endl;
    else if((b[2]+b[3])!=(b[4]+b[6])) cout<<-1<<endl;
    else
    {
      //cout<<t[2]<<" "<<t[3]<<" "<<t[4]<<" "<<t[6]<<endl;
      //int x[n/3][3];
      int a124=0,a126=0,a136=0;
      t[1]=0;
      a136=b[3];
      t[3]=0;t[6]-=b[3];
      a126=t[6];
      t[2]-=t[6];t[6]=0;
      a124=t[2];
      //cout<<a124<<" "<<a126<<" "<<a136<<endl;
      for(int i=0;i<a124;i++)cout<<"1 2 4"<<endl;
      for(int i=0;i<a126;i++)cout<<"1 2 6"<<endl;
      for(int i=0;i<a136;i++)cout<<"1 3 6"<<endl;
    }  
  }
}