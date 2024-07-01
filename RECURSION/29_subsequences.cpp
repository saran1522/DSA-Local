#include<bits/stdc++.h>
using namespace std;
void solve(string input,int ind,string subs,vector<string>&ans)
{
  if(ind>=input.length())
  {
      ans.push_back(subs);
      return;
  }
  solve(input,ind+1,subs,ans);
  subs.push_back(input[ind]);
  solve(input,ind+1,subs,ans);
}
vector<string> sub(string input)
{
    vector<string>ans;
    int ind=0;
    string subs="";
    solve(input,ind,subs,ans);
    return ans;
}
int main(){
  string input,subs;
  cin>>input;
  int ind=0;
  vector<string>out=sub(input);
  for (int i = 0; i <out.size(); i++)
      cout<<out[i]<<" ";
  return 0;
}