#include<bits/stdc++.h>
using namespace std;
//*************binary search recursivly*************
int search(int *arr,int s,int e,int k)
{
    if(s>e)
      return -1;
    int m=s+(e-s)/2;
    if(arr[m]==k)
      return m;
    if(arr[m]>k)
      return search(arr,s,m-1,k);
    else 
      return search(arr,s+1,e,k);
}
int main(){
  int n,k;
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++)
     cin>>arr[i];
  cout<<"enter element to be found: ";
  cin>>k;
  int s=0,e=n-1;
  cout<<search(arr,s,e,k);
  return 0;
}