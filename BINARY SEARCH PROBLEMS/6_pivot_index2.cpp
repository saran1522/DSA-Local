#include<bits/stdc++.h>
using namespace std;
int pivot(vector<int>&arr,int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
         sum+=arr[i];
    int lsum=0,rsum=sum-arr[0];
    for (int i = 0; i <n-1; i++)
    {
      if(lsum==rsum)
       return i;
      lsum+=arr[i];
      rsum-=arr[i+1];
      cout<<i<<" "<<lsum<<" "<<rsum<<endl;
    }
    return -1;
}
int main(){
  int n;
  cout<<"enter size of array "<<endl;;
  cin>>n;
  vector<int> arr(n);
  cout<<"enter elements"<<endl;
  for (int i = 0; i <n; i++)
  {
     cin>>arr[i];
  }
  cout<<"the pivot index is "<<pivot(arr, n);
  return 0;
}