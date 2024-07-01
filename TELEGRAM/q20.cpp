#include<bits/stdc++.h>
using namespace std;
//***********middile digit of a number***********
int main(){
  int n,count=0;
  cin>>n;
  for(int i=n;i!=0;i=i/10)
   count++;
  if(count%2==1)
  {
    for(int i=1;i<=count/2;i++)
       n=n/10;
  int mid=n%10;
  cout<<mid;
  }
  else
  {
    for(int i=1;i<count/2;i++)
    n=n/10;
    int mid1=n%10;
    n=n/10;
    int mid2=n%10;
    cout<<mid2<<" "<<mid1;
  }
  return 0;
}