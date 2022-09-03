class Solution {
public:
    map<char,int> m;
    
    bool isValid(string s) {
    m['(']=1;
    m[')']=-1;
    m['[']=2;
    m[']']=-2;
    m['{']=3;
    m['}']=-3;
        
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]>0) st.push(s[i]);
            else if(m[s[i]]<0 && st.empty()) return false;
            else
            {
                if(m[s[i]]+m[st.top()]!=0) return false;
                else st.pop();
            }
        }
        if(!st.empty()) return false;
        else return true;
    }
};
