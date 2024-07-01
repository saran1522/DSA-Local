#include<bits/stdc++.h>
using namespace std;
// ************sum of array********
int sumarray(int arr[], int n)
{
  int ele=arr[0];
   if(n==1)
    return ele;
  return ele+sumarray(arr+1, n-1);
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  cin>>arr[i];
  int sum=sumarray(arr,n);
  cout<<sum;
}