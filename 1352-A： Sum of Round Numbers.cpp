//https://codeforces.com/contest/1352/problem/A

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int d=s[i]-'0';
			if(d!=0)
			{
				int z=d*pow(10,n-i-1);
				v.push_back(z);
			}
		}
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
		cout<<endl;
	}

}