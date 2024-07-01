#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        for(int i=0;i<M.size();i++)
          st.push(i);
        while(st.size()>1)
        {
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            if(M[a][b]==1)
              st.push(b);
            else if(M[b][a]==1)
              st.push(a);
        }
        int celeb=st.top();
        bool b=true;
        for(int i=0;i<M.size();i++)
        {
            if(M[celeb][i]==1)
            {
              b=false;
              break;
            }
            if(M[i][celeb]==0&&i!=celeb)
            {
                b=false;
                break;
            }
        }
        if(b)
         return celeb;
        else 
        return -1;
     }
};