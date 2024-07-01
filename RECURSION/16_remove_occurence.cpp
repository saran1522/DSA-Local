#include<bits/stdc++.h>
using namespace std;
// ***********removing all occurences of given character*************
string remove(char s[],int n,char c)
{
    static int i=0;
    static char s1[100];
    if(n==0)
      return s1;
    if(s[0]!=c)
    {
      s1[i]=s[0];
      i++;
    }
    return remove(s+1,n-1,c);
}
int main()
{
  char s[100],c;
  string s1;
  cin>>s;
  cin>>c;
  int n=strlen(s);     
  cout<<remove(s,n,c);
  return 0;
}