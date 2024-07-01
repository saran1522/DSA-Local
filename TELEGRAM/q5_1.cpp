#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d=0,root1,root2;
  cin>>a>>b>>c;
  d=(b*b-4*a*c);
  d=sqrt(d);
  cout<<d<<endl;
  int den=2*a;
  root1=(-b+d)/den;
  root2=(-b-d)/den;
  cout<<root1<<" "<<root2;
  return 0;
}