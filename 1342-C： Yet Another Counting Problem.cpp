//https://codeforces.com/contest/1342/problem/C

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int a,b,q,l,r,c;
    cin>>a>>b>>q;
    long long int x[a*b+1];
    x[0]=0;
    c=a*b;
    for(int i=1;i<=a*b;i++)
    {
      if(((i%a)%b)!=((i%b)%a))x[i]=x[i-1]+1;
      else x[i]=x[i-1];
    }
    //cout<<"tot = "<<x[c]<<endl;
    long long int ans[q];
    for(int i=0;i<q;i++)
    {
      cin>>l>>r;
      long long int l1=(l%c==0)?l:(1+l/c)*c;
      long long int r1=(r/c)*c;
      if(l1>r)
      {
        ans[i]=x[r%c]-x[(l-1)%c];
        //cout<<l1<<" "<<r1<<" "<<ans[i]<<endl;
      }
      else
      {
        long long int y=(1+(r1-l1)/c)*x[c];
        ans[i]=x[r%c]-x[(l-1)%c]+y;
        //cout<<l1<<" "<<r1<<" "<<y<<" "<<ans[i]<<endl;
      }
    }
    for(int i=0;i<q;i++)cout<<ans[i]<<" ";
    cout<<endl;
  }
}
    