//https://codeforces.com/contest/1353/problem/C

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n;
    cin>>n;
    unsigned long long int sum=0;
    for(long long int i=0;i<=n/2;i++)sum+=i*i;
    sum*=8;
    cout<<sum<<endl;
  }
}
