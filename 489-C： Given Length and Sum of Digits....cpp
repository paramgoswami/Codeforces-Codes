//https://codeforces.com/contest/489/problem/C

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int m,s;
  cin>>m>>s;
  int a[m],b[m];
  if(s==0)
  {
    if(m!=1)
    cout<<"-1 -1"<<endl;
    else cout<<"0 0"<<endl;
  }
  else
  {
    int s1=s;
    for(int i=0;i<m;i++)
    {
      a[i]=min(9,s1);
      s1-=a[i];
    }
    b[0]=1;
    int s2=s-1;
    for(int i=m-1;i>=1;i--)
    {
      b[i]=min(9,s2);
      s2-=b[i];
    }
    if(s2<9)b[0]+=s2;
    if(s1!=0 ||s2>=9) cout<<"-1 -1"<<endl;
    else
    {
      for(int i=0;i<m;i++)cout<<b[i];
      cout<<" ";
      for(int i=0;i<m;i++)cout<<a[i];
      cout<<endl;
    }
  }
}