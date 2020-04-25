//https://codeforces.com/contest/1327/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,k;
    cin>>n>>k;
    if((n-k)%2==0&&n>=k*k)cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }
}