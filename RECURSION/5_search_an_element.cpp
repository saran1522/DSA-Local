#include<bits/stdc++.h>
using namespace std;
//*********search if element is present or not in an array using recursion*********
bool search(int arr[],int n,int x)
{
  if(n>=0)
    {
      if(arr[n]==x)
        return true;
      else
      return search(arr, n-1,x);
    }
}
int main()
{
  int n,x;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  cout<<"enter number to be search"<<endl;
  cin>>x;
  cout<<search(arr,--n,x);
}