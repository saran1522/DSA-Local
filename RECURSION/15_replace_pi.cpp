#include<bits/stdc++.h>
using namespace std;
// ***********replacing pi with 3.14***********
string rePlace(string s,int n)
{
  string pi="3.14";
  if(n<0)
    return s;
  if(s[n]=='i'&&s[n-1]=='p')
    s.replace((n-1),2,pi);
  return rePlace(s,n-1);

}
int main(){
  string pi="3.14", s;
  cin>>s;
  int n=s.length()-1;
  cout<<rePlace(s,n);
  return 0;
}