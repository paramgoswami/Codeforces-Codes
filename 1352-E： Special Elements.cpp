//https://codeforces.com/contest/1352/problem/E

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,ct=0;
		cin>>n;
		int a[n];
    int c[n+1];
    for(int i=0;i<=n;i++)c[i]=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
      c[a[i]]++;
		}
    int temp,j;
		for(int i=0;i<n;i++)
		{
      int sum=a[i];
      j=i+1;
      while((j<n)&&(sum<=n))
      {
        sum+=a[j];
        if(sum<=n)
        {
          ct+=c[sum];
          c[sum]=0;
        }
        j++;
      }
		}
		cout<<ct<<endl;
	}
 
}