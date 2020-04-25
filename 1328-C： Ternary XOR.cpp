//https://codeforces.com/contest/1328/problem/C

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int n1,n;
    cin>>n1;
    string s1;
    cin>>s1;
    string s2="",s3="";
    int count=0;
    int i,x;
    for(i=0;(i<s1.length()) && (count<1);i++)
    {
      if(s1[i]=='0')
      {
        s2+="0";s3+="0";
      }
      else if(s1[i]=='2')
      {
        s2+="1";s3+="1";
      }
      else if(s1[i]=='1')
      {
        s2+="1";s3+="0";
        count=1;
        x=i;
        break;
      }
    }
    if(count==1 && x!=s1.length()-1)
    {
      for(int i=x+1;i<s1.length();i++)
      {
        s2+="0";
        s3+=s1[i];
      }
    }
    cout<<s2<<endl<<s3<<endl;
  }
  //std::cout << "Hello World!\n";
}