#include<bits/stdc++.h>
using namespace std;
//*********calculating length of string using recursion*********
int length(char c[])
{
  if(c[0]=='\0')
    return 0;
  return length(c+1)+1;
}
int main(){
  int n;
  char c[100];
  gets(c);
  int len=length(c);
  cout<<len;
  return 0;
}