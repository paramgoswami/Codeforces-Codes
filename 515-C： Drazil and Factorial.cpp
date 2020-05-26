//https://codeforces.com/contest/515/problem/C

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() 
{
  int digits;
  cin>>digits;
  long long int n,m;
  cin>>n;
  m=n;
  string s="";
  int c2=0,c3=0,c5=0,c7=0;
  while(m>0)
  {
    int dig=m%10;
    m/=10;
    switch(dig)
    {
      case 2:
        s+="2";
        //c2++;
        break;
      case 3:
        s+="3";
        //c2++,c3++;
        break;
      case 4:
        s+="322";
        //c2++;c3++,c2++,c2++;
        break;
      case 5:
        s+="5";
        //c2++,c3++,c2++,c5++;
        break;
      case 6:
        s+="53";
        //c2++,c3++,c2++,c2++,c5++,c2++,c3++;
        break;
      case 7:
        s+="7";
        //c2++,c3++,c2++,c2++,c5++,c2++,c3++,c7++;
        break;
      case 8:
        s+="7222";
        //c2++,c3++,c2++,c2++,c5++,c2++,c3++,c7++,c2++,c2++,c2++;
        break;
      case 9:
        s+="7332";
        //c2++,c3++,c2++,c2++,c5++,c2++,c3++,c7++,c2++,c2++,c2++,c3++,c3++;
        break;
      default:
        break;
    }
  }
  /*string s="";
  while(c7>0)
  {
    c7--;
    c2-=4,c3-=2,c5--;
    s+="7";
  }
  while(c5>0)
  {
    c5--;
    c2--,c3--,c2--,c2--;
    s+="5";
  }
  while(c3>0)
  {
    c3--,c2--;
    s+="3";
  }
  while(c2>0)
  {
    c2--;
    s+="2";
  }*/
  sort(s.begin(),s.end());
  reverse(s.begin(),s.end());
  cout<<s<<endl;
}