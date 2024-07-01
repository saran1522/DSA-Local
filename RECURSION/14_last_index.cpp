#include<bits/stdc++.h>
using namespace std;
// *********last index of an element***********
int search(int arr[], int n, int x)
{
  //static int count =0,m=--n;
  if(n<0)
     return -1;
    if(arr[n]==x)
      return n;
    else
      return search(arr,n-1,x);
}
int main()
{
  int n,x;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
     cin>>arr[i];
  cin>>x;
  cout<<search(arr,--n,x);
}