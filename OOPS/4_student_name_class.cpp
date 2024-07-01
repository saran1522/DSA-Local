#include<bits/stdc++.h>
using namespace std;
class student {
 private :
 string name;
 int age;
 
 public :
 int const rollnum;
 /*student(string name, int age)
 {
     this -> name =name;
     this -> age=age;
 }*/
 student (string name, int age, int roll) : rollnum(roll){
     this ->name =name;
     this ->age =age;
 }
 void disp()
 {
     cout<<name<<" "<<age<<" "<<rollnum<<endl;
 }
};