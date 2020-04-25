//https://codeforces.com/contest/320/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string t;
  cin>>t;
  int n=t.length();
  int count=0;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    if(t[i]=='1'||t[i]=='4'){}
    else {
      count=1;
      break;
    }
    if(t[i]=='1')v.push_back(i);
  }
  if(count==1)cout<<"NO"<<endl;
  else if(v.size()==0)cout<<"NO"<<endl;
  else
  {
    //cout<<"HI"<<endl;
    int c=0;
    if(v[0]!=0)c++;
    else
    {
      for(int i=0;i<v.size()-1;i++)
      {
        if(v[i+1]-v[i]<4){}
        else{
          //cout<<i<<endl;
          c++;
          break;
        }
      }
      if(n>3 && v[v.size()-1]<n-3)c++;
    }
    if(c==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}