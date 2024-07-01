#include <bits/stdc++.h>
using namespace std;
#include"1_student_class.cpp"
int main()
{
// creating` statically
    student s1(22);
    //s1.rollnum = 222;
    // s1.getAge();
    // s1.setAge(20);
    s1.disp();

// creating dynamically
   student *s3 = new student(22,2121);
   //student s3(22,22111);
   //(*s3).rollnum=6;
   //s3 -> rollnum=33;
   //s3 ->getAge();
   //s3 ->setAge(22);
     s3 ->disp();
   //s3.disp();

    student s2(*s3); //copy constructor has been called
    //student s2(s3);
    s2.disp();
    /*s1.total_st=33; // toalt_st is static variable so it will changed for all objects
    cout<<s1.total_st<<endl; 
    cout<<s2.total_st<<endl;*/
    cout<<student :: getTotal_st(); //accessing and printing static member
    delete s3;
    return 0;
}