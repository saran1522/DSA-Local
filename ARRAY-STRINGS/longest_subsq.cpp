#include<bits/stdc++.h>
using namespace std;
// ***********number of contiguos pairs which's difference is 1**************
int longestSbu(vector<int>&arr,int n)
{
    if(n<=2)
      return n;
      int count=1,ans=0;
  for (int i = 1; i <n; i++)
  {
    if(arr[i]-arr[i-1]==1)
    {
        count++;
        ans=max(ans,count);
    }
    else 
      count=0;
  }
  return ans;
}
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
      cin>>arr[i];
  sort(arr.begin(),arr.end());
  cout<<longestSbu(arr, n);
  return 0;
}