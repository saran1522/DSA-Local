#include<iostream>
using namespace std;
/*class human{
    public:
    int age;
    int hight;

};
class male : public human{
        public:
        string name;
        void print()
        {
            cout<<age<<" "<<hight<<" "<<name;
        }

        int setAge(int a)
        {
            this->age=a;
        }
    };

int main()
{
    male m1;
    //m1.age=33;
    m1.setAge(27);
    m1.hight=22;
    m1.name="saran";
    m1.print();
} */

class B{
  public:
  void print()
  {
      cout<<" printing in B"<<endl;
  }
};

class A : public B{
  public: 
  int a;
  void print()  // method overiding
  {
      cout<<"printing in A"<<endl; 
  }
  void operator+ (A &a3) { //opertor overloading
      cout<<"overloading () operator"<<endl;
      cout<<a-a3.a<<endl;
  }
};
 
int main()
{
  A a1,a2;
  a1.a=3;
  a2.a=8;
  a1+a2;
  a1.print();
}