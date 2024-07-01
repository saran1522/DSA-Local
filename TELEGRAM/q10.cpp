#include<bits/stdc++.h>
using namespace std;
int main(){
  int i=10;
  int *p=&i;
  (*p)++;
  *(p++);
  ++*p;
  *++p;
  *p++;
  ++(*p);
  ++*++p;
  ++*(++p);
  cout<<i<<" "<<p;
  return 0;
}