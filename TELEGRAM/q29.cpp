#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    int x=1, k;
    if(n==1)
       return x;
    for (k= 1; k< n; ++k)
    {
        x=x+(fun(k)*fun(n-k));
    }
    return x;
}
int main(){
  int n=1;
 cout<<fun(n);
  return 0;
}