#include<iostream>
using namespace std;
class fraction{
    private : 
    int numen;
    int denom;
    public :

    //assigning values to the objects
    fraction(int numen, int denom)
    {
        this -> numen=numen;
        this ->denom=denom;
    }

    //simplifying the calculated fraction
    void simplify()
    {
        int gcd=1,mini=min(numen,denom);
        for(int i=1;i<=mini;i++){
         if(numen%i==0&&denom%i==0)
          gcd=i;
        }
        numen=numen/gcd;
        denom=denom/gcd;
    }

    // adding 2 fractions
    void add(fraction const &f2)
    {
       int lcm = denom*f2.denom;
       int x=lcm/denom;
       int y=lcm/f2.denom;
       int num=(x*numen)+(y*f2.numen);
       numen=num;
       denom=lcm;
       simplify();  //simplify is called for f1
    }

    // adding 2 fractions by overloading + operator
    fraction operator+(fraction const &f2)
    {
       int lcm = denom*f2.denom;
       int x=lcm/denom;
       int y=lcm/f2.denom;
       int num=(x*numen)+(y*f2.numen);
       fraction f3(num,lcm); //making new object and assingning calculatd values in it
       //numen=num;
       //denom=lcm;
       //simplify();  //simplify is called for f1
       f3.simplify();  //simplify is called for f3
       return f3;
    }

    //overloading ++pre operator
    /*void operator++()
    {
        numen=numen+denom;
        simplify();
    }*/
    fraction & operator++()
    {
        numen=numen+denom;
        simplify();
        //fraction f3(numen,denom);
        return *this;
    }

    void disp()
    {
        cout<<numen<<"/"<<denom<<endl;
    }
};