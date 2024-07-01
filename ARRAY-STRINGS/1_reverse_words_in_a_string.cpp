class Solution {
public:
    string reverseWords(string s) {
   string str;
   int n=s.length();
   int last=n-1;
   for (int i = n-1; i>=0||i==-1; i--)
   {
    if(i==-1||(s[i]==' '&&s[i+1]!=' '))
    {
      int k=i+1;
      while(last>=k)
      {
          if(s[k]!=' ')
          str.push_back(s[k]);
          if(k==last)
              str.push_back(' ');
          k++;
      }
      last=i-1;
    }
   }
        int len=str.length()-1;
        while(str[len--]==' ')
        str.pop_back();
        return str;
 }
};