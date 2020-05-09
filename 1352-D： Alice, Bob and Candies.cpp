//https://codeforces.com/contest/1352/problem/D

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int x=0,y=0;
		int var=1;
		int temp1,temp2=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		int i=0,j=n-1;
		x+=a[i++];
		temp1=x;
		int mv=1;
		while(i<=j)
		{
			if(var==1)
			{
				temp2=0;
				while((temp2<=temp1)&&(i<=j))
				{
					temp2+=a[j];
					j--;
				}
				//cout<<temp1<<" "<<temp2<<" "<<i<<" "<<j<<endl;
				y+=temp2;
			}
			else
			{
				temp1=0;
				while((temp1<=temp2)&&(i<=j))
				{
					temp1+=a[i];
					i++;
				}
				//cout<<temp2<<" "<<temp1<<" "<<i<<" "<<j<<endl;
				x+=temp1;
			}
			var=1-var;
			mv++;
		}
		cout<<mv<<" "<<x<<" "<<y<<endl;
	}
}