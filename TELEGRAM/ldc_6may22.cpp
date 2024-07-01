class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<char>st;
        st.push('0');
        int cnt=1,wcnt=1;
        for(int i=0;i<s.length();i++)
        {
            char c=st.top();
            st.push(s[i]);
            if(c==s[i])
            {
                cnt++;
                if(cnt==k||wcnt==k)
                {
                    int n=k;
                    while(n--)
                        st.pop();
                   cnt=1;
                    if(wcnt==k)
                        wcnt=1;
                }
            }
            else
                cnt=1;
        }
        string ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        ans.pop_back();
        reverse(ans.begin(),ans.end());
        return ans;
    }
};