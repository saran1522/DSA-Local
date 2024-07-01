class Solution
{
  public:
    string modify (string s)
    {
        int i=0,j=0;
        for(int i=0;i<s.length();i++)
         {
             if(s[i]!=' ')
              s[j++]=s[i];
         }
        int n=s.length()-1;
        while(n>=j){
          s.pop_back();
          n--;
        }
         return s;
    }
};