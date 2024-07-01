#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=1;
    cout<<"enter n"<<endl;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j< n+i; j++)
        {
            if(j<=n-i || j>=n+i)
                cout<<" ";
            else
            {
             cout<<count;
             if(j<n)
             count--;
             else
             count++;
            }
        }
        cout<<endl;
    }
} 
