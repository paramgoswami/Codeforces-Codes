//https://codeforces.com/contest/63/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  string a[n],b[n],c[n];
  int j=0;
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    a[i]=s;
    cin>>s;
    b[i]=s;
    if(b[i]=="rat")c[j++]=a[i];
  }
  for(int i=0;i<n;i++)
  {
    if((b[i]=="woman")||(b[i]=="child"))c[j++]=a[i];
  }
  for(int i=0;i<n;i++)
  {
    if(b[i]=="man")c[j++]=a[i];
  }
  for(int i=0;i<n;i++)
  {
    if(b[i]=="captain")c[j++]=a[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<c[i]<<endl;
  }
}