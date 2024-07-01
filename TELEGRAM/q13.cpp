#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,count=1;
  cin>>n;
  for (int i = 0; i <n; i++)
  {
      count=1;
    for (int j = 1; j<n*2; j++)
    {
    
        if(j<=n-i||j>=n+i)
        cout<<count;
        else
        cout<<" ";
        if(j<n)
        count++;
        else
        count--;
        }
    cout<<endl;
    }
  return 0;
  }
  
