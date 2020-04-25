//https://codeforces.com/contest/230/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<long long int,int> m;

void sieve(int n)
{
  bool prime[n+1];
  memset(prime,true,sizeof(prime));
  for(long long int i=2;i*i<=n;i++)
  {
    if(prime[i]==true)
    {
      for(int j=i*i;j<=n;j+=i)
      {
        prime[j]=false;
      }
    }
  }
  for(long long int i=2;i<=n;i++)
  {
    if(prime[i]==true) 
    {
      long long int x=i*i;
      m[x]=0;
      //cout<<i<<" "<<x<<endl; 
    }
  }
}

int main() {
  sieve(1000000);
  int n;
  cin>>n;
  long long int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(m.find(a[i])==m.end())cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
}