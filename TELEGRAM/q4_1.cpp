#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==1||n==0)
      return 1;
    return n*factorial(n-1);     
}
int main(){
  int n,numFact,rem,sum=0;
  cin>>n;
  int m=n;
  while(n>0){
  rem=n%10;
  n=n/10;
  numFact=factorial(rem);
  sum=sum+numFact;
  }
  if(sum==m)
  cout<<"strong number";
  else
  cout<<"not a strong number";
  return 0;
}