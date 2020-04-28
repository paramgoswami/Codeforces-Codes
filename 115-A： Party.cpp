//https://codeforces.com/contest/115/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int x=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    map<int,int> z;
    int temp;
    for(int i=1;i<=n;i++)z[i]=0;
    int ct=0;
    unordered_set<int> s;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==-1) s.insert(i),z[i]=0;
    }
    int changes=1;
    while(changes!=0)
    {
      changes=0;
      for(int i=1;i<=n;i++)
      {
        if(s.find(i)==s.end())
        {
          if(z[i]!=z[a[i]]-1)changes++;
          z[i]=z[a[i]]-1;
        }
      }
    }
    map<int,int>::iterator it;
    for(it=z.begin();it!=z.end();it++)
    {
        x=min(x,it->second);
    }
    cout<<-1*x+1<<endl;
    //cout<<x<<endl;
}
    