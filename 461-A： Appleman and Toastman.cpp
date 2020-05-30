//https://codeforces.com/contest/461/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  long long int sum=0,totlsum=0;
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++)totlsum+=v[i];
  sum+=totlsum;
  int x=n;
  while(x>1)
  {
    sum+=totlsum;
    totlsum-=v[n-x];
    //cout<<sum<<" "<<totlsum<<endl;
    x--;
  }
  cout<<sum;
}