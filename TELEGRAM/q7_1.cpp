#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  int min=arr[0], max=arr[0],sum=arr[0],average;
  for (int i = 1; i < n; i++)
  {
     if(arr[i]<min)
     min=arr[i];
     else if (arr[i]>max)
     max=arr[i];
     sum=sum+arr[i];
  }
  average=sum/n;
  cout<<"lowest masrks: "<<min<<endl;
  cout<<"highest marks: "<<max<<endl;
  cout<<"average marks: "<<average<<endl;
  return 0;
}