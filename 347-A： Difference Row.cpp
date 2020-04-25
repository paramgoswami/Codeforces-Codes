//https://codeforces.com/contest/347/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  int temp=a[0];
  a[0]=a[n-1];
  a[n-1]=temp;
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}