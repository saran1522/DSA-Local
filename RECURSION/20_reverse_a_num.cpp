#include<bits/stdc++.h>
using namespace std;
// ********reverse a number using recursion**********
int reverse(int n)
{
  static int num=0;
  if(n<=0)
     return num;
  int rem=n%10;
  num=num*10+rem;
  reverse(n/10);
}
int main()
{
  int n;
  cin>>n;
  cout<<reverse(n);
}