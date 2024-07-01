#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k=0;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
      k=k+i;
  }
  int m=n+k,l=n-2;
  for (int i = n; i>0; i--)
  {
      for(int j=1;j<=i;j++)
      {
      cout<<m<<" ";
      if(i%2==0)
        m++;
      else
        m--;
      }
      if(i%2==0)
      {
        m=m-l;
        l=l-2;
      }
      else
      {
         m=m-l;
         l=l+2;
      }
      cout<<endl;
  }
  
  return 0;
}