#include"3_fraction_class.cpp"
using namespace std;
int main()
{
    int val1,val2;
    cout<<"enter values for f1"<<endl;
    cin>>val1>>val2;
    fraction f1(val1,val2);
    cout<<"enter values for f2"<<endl;
    cin>>val1>>val2;
    fraction f2(val1,val2);
   /* f1.numen=12;
    f1.denom=4;
    f2.numen=12;
    f2.denom=8;*/
    fraction f3 = f1 + f2;
    f1.add(f2);
   // f1.disp();
    f3.disp();
    ++(++f3);
    f3.disp();
    fraction f4 = ++(++f3);
    f3.disp();
    f4.disp();
    cout<<endl;
}
