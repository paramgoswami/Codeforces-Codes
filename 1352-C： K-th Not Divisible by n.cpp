//https://codeforces.com/contest/1352/problem/C

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int x=0,y=k;
		int z=y/(n-1);
		if(k%(n-1)==0)z--;
		cout<<z*n+(k-z*(n-1))<<endl;
	}

}