#include<bits/stdc++.h>
using namespace std;

// *********checkig if string is palindrom using recursion************
bool check(string str,int n)
{
  static int i=0;
  if(n<str.length()/2)
    return true;
  if(str[n]==str[i++])
     return check(str,n-1);
  else
     return false;
}
int main()
{
  string str;
  cin>>str;
  int n=str.length()-1;
  bool b=check(str,n);
  if(b==true)
  cout<<"string is palindrom";
  else 
  cout<<"string is not palindrom";
}