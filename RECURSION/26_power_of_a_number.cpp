#include<bits/stdc++.h>
using namespace std;
long long int power(int n, int m)
{
    if(m==1)
      return n;
    if(m&1)
      return n*power(n,m/2)*power(n,m/2);
    else 
      return power(n,m/2)*power(n,m/2);
}
int main(){
  int n,m;
  long long int ans;
  cin>>n>>m;
  ans=power(n,m);
  cout<<"the result of "<<n<<" power "<<m<<" is "<<ans;
  return 0;
}