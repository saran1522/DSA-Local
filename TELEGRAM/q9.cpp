#include<bits/stdc++.h>
using namespace std;
//check after how many months male will increase famale at given rate
int main(){
  int ml=4532, fml=6240, year=2021;
  //you can use below code for different values :)
  /*cout<<"enter the number of male,female students"<<endl;
  cin>>ml>>fml;
  cout<<"enter the year"<<endl;
  cin>>year;*/
  while(ml<fml)
  {
      ml=ml+((ml*3.5)/100);
      fml=fml+((fml*2.7)/100);
      year++;
  }
  cout<<year;
  return 0;
}