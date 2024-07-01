#include<bits/stdc++.h>
using namespace std;
//binary to dicimal
/*int main()
{
   string s;
   int decimal=0, count=1;
   cin>>s;
   for (int i = s.length()-1; i >=0; i--)
   {
      if (s[i]=='1')
      {
         decimal+=count;
      }
      count=count*2;
   }
   cout<<decimal;
}*/
int main()
{
   string s;
   int decimal=0, count;
   cin>>s;
   for (int i = s.length()-1, j=0; i >=0; i--, j++)
   {
      decimal+=int((s[i]-48)*pow(2,j));
   }
   cout<<decimal;
}