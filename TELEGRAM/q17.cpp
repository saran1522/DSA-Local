#include<bits/stdc++.h>
using namespace std;
int multi(int n)
{
  int mul;
  if(n==0)
    return 1;
  mul=n%10;
  //n=n/10;
  return mul*multi(n/10);
}
int main(){
  int n,mul;
  cin>>n;
  mul=multi(n);
  cout<<mul;
  return 0;
}