#include<bits/stdc++.h>
using namespace std;
// **************armstrong number 1 to 900**************
int main(){
//any number is not armstrong till 100
    int i=1, j, k, l,m ;

    while (i<900)
   {
     j=i%10;
     k=i/10;
     k=k%10;
     l=i/100;
     m=((l*l*l)+(k*k*k)+(j*j*j));
     if (m==i)
        {
          cout<<"armstrong number is "<<i<<endl;
        }  
     i++;
   }
    return 0;
}