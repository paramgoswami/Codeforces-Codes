//https://codeforces.com/contest/1311/problem/C

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int m,n;
    cin>>n>>m;
    int p[m];
    string s;
    cin>>s;
    int cnt[n];
    for(int i=0;i<n;i++)cnt[i]=0;
    for(int i=0;i<m;i++){cin>>p[i];cnt[p[i]-1]++;}
    for(int i=n-1;i>0;i--)
    {
      cnt[i-1]+=cnt[i];
    }
    vector<int> ans(26);
    for(int i=0;i<n;i++)
    {
      ans[s[i]-'a']+=1+cnt[i];
    }
    for(int i=0;i<26;i++)cout<<ans[i]<<" ";
    cout<<endl;
  }
  return 0;
}