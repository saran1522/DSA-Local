#include<bits/stdc++.h>
using namespace std;
//*******reverse alphabet pattern********
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n)
  {
      char c='A'+n-i;
      int j=1;
     while (j<=i)
     {
         cout<<c<<" ";
         c++;
         j++;
     }
     i++;
     cout<<endl;
  }
  return 0;
}