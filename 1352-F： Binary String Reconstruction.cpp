//https://codeforces.com/contest/1352/problem/F

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		string s="";
		if(b==0)
		{
			if(c!=0)for(int i=0;i<=c;i++)s+="1";
			if(a!=0)for(int i=0;i<=a;i++)s+="0";
			
		}
		else
		{
			for(int i=0;i<=a;i++)s+="0";
			int x=1;
			int te=(b%2==0)?b-1:b;
			for(int i=0;i<te;i++)
			{
				if(x)s+="1";
				else s+="0";
				x=1-x;
			}
			for(int i=0;i<c;i++)s+="1";
			if(b%2==0)s+="0";
		}
		cout<<s<<endl;
	}
}