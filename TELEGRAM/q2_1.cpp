#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,rem,arm=0,m;
  cin>>n;
  m=n;
  while(n>0)
  {
      rem=n%10;
      n=n/10;
      arm+=(rem*rem*rem);
  }
  if(arm==m)
  cout<<"armstrong number";
  else
  cout<<"not an armstrong number";
  return 0;
}