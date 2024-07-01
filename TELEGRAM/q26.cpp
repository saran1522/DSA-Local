#include<bits/stdc++.h>
using namespace std;
//********sum of array till a given highest element**********
int givesum(int arr[], int n, int till)
{
    static int sum=0,count=0;
    if(n==0||count==till)
     return 0;
    else
    {
    count++;
    sum=arr[n-1]+givesum(arr,n-1,till);
    }
    return sum;
}
int main(){
  int n,till;
  cin>>n;
  int arr[n];
  for (int i = 0; i <n; i++)
  {
    cin>>arr[i];
  }
  cout<<"enter till which highest element you want the sum"<<endl;
  cin>>till;
  sort(arr,arr+n);
  cout<<givesum(arr,n,till);
  
  return 0;
}