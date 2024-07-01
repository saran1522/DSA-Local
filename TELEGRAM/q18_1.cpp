#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    char c;
    cin>>n;
	string str[n]={},s;
    for(int i=0; i<n;i++)
    {
        cin>>str[i];
    }
     getline(cin,s);
     cout<<"faaltu";
    for(int j=0; j<s.length(); j+=2)
    {
      for(int i=0; i<n; i++)
      {
        if(str[i].find(s[j])==0)
        {
         cout<<str[i]<<endl;
         break;
        }
      }
    }
    return 0;
}