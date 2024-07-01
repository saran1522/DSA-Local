#include<bits/stdc++.h>
using namespace std;
//******hackerrank problem********
void variable_sized(int N,int q)
{
   vector<vector<int>>v;
  cin>>N>>q;
  for (int i = 0; i < N; i++)
  {
    int n;
    cin>>n;
    vector<int>temp;
    for(int j=0;j<n;j++)
      {
          int x;
          cin>>x;
          temp.push_back(x);
      }
      v.push_back(temp);
  }
  for(int i=1;i<=q;i++)
  {
      int r,c;
    cin>>r>>c;
    cout<<v[r][c];
  }
}
int main(){
  stringstream ss("23,5888,56");
  int a,b,c;
  char ch;
  ss>>a>>ch>>b>>ch>>c>>ch;
  cout<<a<<" "<<b<<" "<<c;
 // int N,q;
 // variable_sized(N,q);
  return 0;
}