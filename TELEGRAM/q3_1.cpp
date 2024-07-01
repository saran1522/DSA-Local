#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,j;//,i=2;
 // bool b=true;
  cin>>n;
  if(n==1||n==2)
  cout<<"prime number";
  else{
  for (int i = 2; i <n; i++)
  {
    j=i;
    if(n%i==0)
    break;
  }
  j++;
  if(j==n)
    cout<<"prime number";
  else
    cout<<"not a prime number";
  return 0;
}
}