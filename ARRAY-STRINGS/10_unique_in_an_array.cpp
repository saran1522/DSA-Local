#include<bits/stdc++.h>
using namespace std;
//**************unique element in an array************
//*******every element occurs twice and uniqu occurs only once******
//the xor of same numbers returns 0 and xor of 0 and a number will return that number
int main()
{
    int n,ans=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        ans=(ans^arr[i]);
    }
    cout<<ans;
    return 0;
}