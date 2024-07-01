#include<bits/stdc++.h>
using namespace std;
// *********geometric sum of series*********
float gsum(int k)
{
  static float sum=0;
  if(k==0)
     return 1.0;
  sum=(1/pow(2,k));
  return sum+gsum(k-1);
}
int main()
{
  int k;
  cin>>k;
  cout<<gsum(k);
}