//https://codeforces.com/contest/1352/problem/B

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
		int y=n-(k-1);
		int z=y-(k-1);
		if((y>0)&&(y%2==1))
		{
			cout<<"YES"<<endl;
			for(int i=0;i<k-1;i++) cout<<"1 ";
			cout<<y<<endl;
		}
		else if((z>0)&&(z%2==0))
		{
			cout<<"YES"<<endl;
			for(int i=0;i<k-1;i++) cout<<"2 ";
			cout<<z<<endl;
		}
		else cout<<"NO"<<endl;
	}

}