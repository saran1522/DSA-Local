#include"2_complex_class.cpp"
using namespace std;
int main(){
  int val1,val2, choice;
    cout<<"enter values for c1"<<endl;
    cin>>val1>>val2;
    complex c1(val1,val2);
    cout<<"enter values for c2"<<endl;
    cin>>val1>>val2;
    complex c2(val1,val2);
    cout<<"enter cohice"<<endl;
    cin>>choice;
    if(choice==1)
    c1.add(c2);
    else if(choice==2)
    c1.multiply(c2);
    else
    cout<<"invalid choice"<<endl;
    c1.disp();
  return 0;
}