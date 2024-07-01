#include<bits/stdc++.h>
using namespace std;
// **********changing string of number in integer***********
int change(string s,int n)
{
  static int i=0;
  if(n<0)
    return 0;
  int b=s[n]-48;
  return change(s,n-1)*10+b;
}
int main()
{
  int n;
  string s;
  cin>>s;
  n=s.length()-1;
  cout<<change(s,n);
}