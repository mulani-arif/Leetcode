class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pr=strs[0];
        int ct=0;
        string s="";
        for(int i=0;i<pr.size();i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=pr[i] || strs[j].size()<=i)
                {
                    return s;
                }
            }
            s+=pr[i];
        }
        return s;
    }
};
