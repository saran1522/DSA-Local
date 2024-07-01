#include<bits/stdc++.h>
using namespace std;
//you have 4 coins {25,10,5,1}
//given a value n, return minimum no. of coins required for acheiving value n
int main(){
  int n,coins=0;
  cin>>n;
  int arr[4]={25,10,5,1};
  for (int i = 0; i < 4; i++)
  {
      int div=n/arr[i];
      cout<<div<<" ";
      coins+=div;
      n-=(div*arr[i]);
  }
  cout<<endl;
  cout<<"minimum no. of coins required is: "<<coins;
  return 0;
}