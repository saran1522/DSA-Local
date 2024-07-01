#include<bits/stdc++.h>
using namespace std;
//*********counting zeros in a number**********
int count(int n)
{
  int i=0,m;
  if(n==0)
  return 0;
  m=n%10;
  if(m==0)
     i=1;
  return i+count(n/10);
}
int main()
{
  int n;
  cin>>n;
  cout<<count(n);
}