#include<bits/stdc++.h>
using namespace std;
// ************first index of an element using recursion*************
int search(int arr[], int n, int x)
{
  static int count =0,m=--n;
  if(count>m)
     return -1;
    if(arr[0]==x)
      return count;
    else{
      count++;
      return search(arr+1,n-1,x);
  }
}
int main()
{
  int n,x;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
     cin>>arr[i];
  cin>>x;
  cout<<search(arr,n,x);
}