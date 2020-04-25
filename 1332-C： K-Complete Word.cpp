//https://codeforces.com/contest/1332/problem/C

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string kl;
    for(int i=(k-1)/2;i>=0;i--)
    {
      map<char,int> x;
      for(int j=i;j<n;j+=k)
      {
        x[s[j]]++;
      }
      for(int j=k-i-1;j<n;j+=k)
      {
        x[s[j]]++;
      }
      int max=-1;
      char c;
      for(auto it=x.begin();it!=x.end();it++)
      {
        if(it->second>max)
        {
          max=it->second;
          c=it->first;
        }
      }
      if(k%2==0 && i==(k-1)/2) kl=kl+c+c;
      if(k%2==1 && i==(k-1)/2) kl=kl+c;
      if(i!=(k-1)/2) kl=c+kl+c;
      //cout<<kl<<" "<<i<<endl;
    }
    //./cout<<kl<<endl;
    int count =0;
    for(int i=0;i<n;i++)
    {
      if(kl[i%k]==s[i]){}
      else count++;
    }
    cout<<count<<endl;
  }
  
}