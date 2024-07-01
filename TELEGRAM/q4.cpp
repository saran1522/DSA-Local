#include<bits/stdc++.h>
using namespace std;
//binary to decimal
int main()
{
 int n, count=1, var, decimal=0;
 cin>>n;
 while(n>0){
    var=n%10;
    n=n/10;
    if (var==1)
    {
       decimal=decimal+count;
    }
    count=count*2;
 }
 cout<<decimal;
} 
