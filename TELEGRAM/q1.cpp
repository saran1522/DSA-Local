#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,sum=0;
  cin>>n;
  for (int i = 1; i <n; i++)
  {
      if(n%i==0)
      sum=sum+i;
  }
  if(sum==n)
  cout<<"perfect number";
  else
  cout<<"not a perfect number";
  return 0;
}