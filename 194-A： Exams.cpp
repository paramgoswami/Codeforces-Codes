//https://codeforces.com/contest/194/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  k=k-2*n;
  k=(k>=n)?0:n-k;
  cout<<k;
}