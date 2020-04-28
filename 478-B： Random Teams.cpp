//https://codeforces.com/contest/478/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() 
{
  long long int n,m;
  cin>>n>>m;
  unsigned long long int kmin,kmax;
  long long int x=n-m+1;
  kmax=x*(x-1)/2;
  x=n/m;
  kmin=(n%m)*((x+1)*x)/2+(m-n%m)*x*(x-1)/2;
  cout<<kmin<<" "<<kmax;
}