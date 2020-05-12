//https://codeforces.com/contest/1352/problem/G

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
		cin>>n;
    int x=(n%2==0)?n-1:n;
    if(n<4)
    {
      cout<<"-1"<<endl;
    }
    else
    {
      for(int i=x;i>0;i=i-2)cout<<i<<" ";
      x=4;
      cout<<"4 2 ";
      for(int i=x+2;i<=n;i+=2) cout<<i<<" ";
      cout<<endl;
    }
  }
}