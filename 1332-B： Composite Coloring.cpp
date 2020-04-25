//https://codeforces.com/contest/1332/problem/B

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    map<int,int> z,newz;
    set<int> s;
    for(int i=0;i<n;i++)
    {
      if(z.find(a[i])==z.end())
      {
        if(a[i]%2==0)z[a[i]]=2;
        else if(a[i]%3==0)z[a[i]]=3;
        else if(a[i]%5==0)z[a[i]]=5;
        else if(a[i]%7==0)z[a[i]]=7;
        else if(a[i]%11==0)z[a[i]]=11;
        else if(a[i]%13==0)z[a[i]]=13;
        else if(a[i]%17==0)z[a[i]]=17;
        else if(a[i]%19==0)z[a[i]]=19;
        else if(a[i]%23==0)z[a[i]]=23;
        else if(a[i]%29==0)z[a[i]]=29;
        else if(a[i]%31==0)z[a[i]]=31;
      }
      s.insert(z[a[i]]);
    }
    int i=1;
    for(auto it=s.begin();it!=s.end();it++)
    {
      newz[*it]=i;
      i++;
    }
    cout<<s.size()<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<newz[z[a[i]]]<<" ";
    }
    cout<<endl;
  }
}