#include<bits/stdc++.h>
using namespace std;
//add element with previous and sumbtract with next
int main(){
  int n;
  cin>>n;
  int arr[n],arr1[n];
  for(int i=0;i<n;i++)
      cin>>arr[i];
  for (int i = 0; i<n; i++)
  {
      if(i==0)
       arr1[i]=arr[i]-arr[i+1];
      else if(i==n-1)
       arr1[i]=arr[i]+arr[i-1];
      else
       arr1[i]=(arr[i]+arr[i-1])-arr[i+1];
  }
  for(int i=0;i<n;i++)
     cout<<arr1[i]<<" ";
  return 0;
}