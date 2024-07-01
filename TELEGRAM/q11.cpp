#include<stdio.h>
//#include<bits/stdc++.h>
//using namespace std;
//maximum among 6 numbers
int max(int n1,int n2)
{
  if(n1>n2)
  return n1;
  else
  return n2;
}
int main(){
  int n1,n2,n3,n4,n5,n6,m1,m2,m3;
  scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6); //,&m1,&m2,&m3);
  //cin>>n1>>n2>>n3>>n4>>n5>>n6;
  m1=max(n1,n2);
  m2=max(n3,n4);
  m3=max(m1,m2);
  m1=max(n5,n6);
  m2=max(m3,m1);
  printf("%d",m2);
  //cout<<m2;

  return 0;
}