//https://codeforces.com/contest/1363/problem/C

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void func()
{
  int n,x;
  cin>>n>>x;
  vector<int> v(n+1);
  int a,b;
  vector<vector<int> >adj(n+1,vector<int>(n+1));
  for(int i=0;i<n-1;i++)
  {
    cin>>a>>b;
    v[a]++,v[b]++;
    adj[a][b]=1;
    adj[b][a]=1;
  }
  if((v[x]<=1)||(n<=2))cout<<"Ayush\n";
  else
  {
    if(n%2==0)cout<<"Ayush\n";
    else cout<<"Ashish\n";
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