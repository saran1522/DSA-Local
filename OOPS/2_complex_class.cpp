#include<iostream>
using namespace std;
class complex{
  private :
   int real;
   int imag;
  
  public :
   complex(int real , int imag)
   {
       this -> real=real;
       this -> imag=imag;
   }
   void add (complex const c2)
   {
       real+=c2.real;
       imag+=c2.imag;
   }
   void multiply (complex const c2)
   {
       real=(real*c2.real)-(imag*c2.imag);
       imag=((real*c2.imag)+(c2.real*imag));
   }
   void disp()
   {
       if(imag<0)
       cout<<real<<" - "<<"i"<<(-1*imag);
       else
       cout<<real<<" + "<<"i"<<imag;
   }
};