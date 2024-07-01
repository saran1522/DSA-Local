#include<bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    if(x==0)
      return y;
    else if(y==0)
      return x;
    else if(x>y)
      return gcd(x-y,y);
    else 
      return gcd(y-x,x);
}
int main(){
  int x,y;
  cin>>x>>y;
  cout<<"the gcd of "<<x<<","<<y<<" is: "<<gcd(x,y);
  return 0;
}