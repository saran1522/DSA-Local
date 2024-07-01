#include<bits/stdc++.h>
using namespace std;
// check given number of 1 can be placed or not in given array, two 1s cant be adjcent
int main(){
  int n,num;
  cin>>n;
  int arr[n];
  for (int i = 0; i <n; i++)
  {
    cin>>arr[i];
  }
  cin>>num;
  for (int i = 0; i <n; i++)
  {
    if(arr[i]==0 && arr[i+1]==0)
    {
      num--;
      arr[i+1]=2;
    }
  }
  if(num!=0)
  cout<<"false";
  else 
  cout<<"true";
  return 0;
}