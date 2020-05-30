//https://codeforces.com/contest/570/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n,m;
    cin>>n>>m;
    if(n==1)cout<<"1"<<endl;
    else if(n-m>m-1)cout<<m+1<<endl;
    else cout<<m-1<<endl;
}