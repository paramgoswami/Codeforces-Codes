//https://codeforces.com/contest/268/problem/B

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  int sum=0;
  for(int i=1;i<n;i++)sum+=i*(n-i);
  cout<<sum+n<<endl;
}