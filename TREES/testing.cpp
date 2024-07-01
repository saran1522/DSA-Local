#include<iostream>
using namespace std;
int main(){
  int arr[]={2,9,33,9};
  cout<<&arr<<" "<<&arr+1<<endl;
  cout<<arr<<" "<<arr+1<<endl;
  return 0;
}