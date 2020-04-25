//https://codeforces.com/contest/208/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin>>s;
  regex r("WUB");
  string t=regex_replace(s,r," ");
  cout<<t<<endl;
}