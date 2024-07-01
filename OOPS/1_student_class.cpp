#include<bits/stdc++.h>
using namespace std;
class student {
 private :
 int rollnum;
 int age;
 static int total_st;
 
 //default constructor
/* student ()
 {
   // it will initialize any object with garbage values
  }*/

 //parameterized constructor and 'this' keyword
 public :

 //copy constructor
 student (student &s)
 {
    age=s.age;
    rollnum=s.rollnum;
    total_st++;
 }

 static int getTotal_st()
 {
     return total_st;
 }

 student(int rollnum)
 {
     this -> rollnum=rollnum;
     total_st++; //increasing count of students
 }

 student(int rollnum, int age)
 {
     this -> rollnum=rollnum;
     this -> age=age;
     total_st++; //increasing count of students
 }

 void disp()
 {
     cout<<age<<" "<<rollnum<<endl;
 }

 // getters and setters
 /*int getAge()
 {
     return age;
 }
 int setAge(int a)
 {
     age =a;
 }*/
};

int student :: total_st=0;