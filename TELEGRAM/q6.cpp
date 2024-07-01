#include<bits/stdc++.h>
using namespace std;
//maximum occured character in an string
int main(){
  int count, maxoccur=0;
  string str;
  char max;
  getline(cin,str);
  for (int i = 0; i < str.length(); i++)
  {
      count=0;
      for (int j = 0;  j< str.length(); j++)
      {
          if (str[i]==str[j])
          {
              count++;
          }
        
      }
      if (count>maxoccur)
          {
              maxoccur=count;
              max=str[i];
          }
  }
  cout<<max;
  return 0;
}