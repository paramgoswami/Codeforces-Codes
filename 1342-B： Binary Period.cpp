//https://codeforces.com/contest/1342/problem/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s,ans;
    cin>>s;
    int tot=0,n=s.length();
    for(int i=0;i<s.length();i++)tot+=s[i]-'0';
    if(tot==0 || tot==n)ans=s;
    else
    {
      ans=s[0];
      for(int i=1;i<n;i++)
      {
        if(s[i]!=s[i-1])ans+=s[i];
        else if(s[i]=='0')ans+="10";
        else ans+="01";
      }
    }
    cout<<ans<<endl;
  }
}
    