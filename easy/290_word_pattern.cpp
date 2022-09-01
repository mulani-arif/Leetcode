class Solution {
public:
     vector<pair<char,string>> v;
    
    bool is_not_present(char pattern)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first==pattern) return false;
        }
        return true;
    }
    bool not_same(char pattern,string str)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first==pattern && v[i].second!=str) return true;
        }
        return false;
    }
    bool wordPattern(string pattern, string s) {
       
        for(int i=0;i<pattern.size();i++)
        {
            string str;
            int strt=0;
            int len=0;
            for(int j=0;j<=s.size();j++)
            {   
                if(s[j]==' ' || j==s.size())
                {
                    str=s.substr(strt,len);
                    strt=j+1;
                    len=-1;
                    if(is_not_present(pattern[i]))
                    {
                    v.push_back({pattern[i],str});
                        i++;
                    }
                    else if(not_same(pattern[i],str))
                    {
                        return false;
                    }
                    else i++;
                }
                len++;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[i].second==v[j].second) return false;
            }
        }
        if(v.size()==1 && pattern.size()>1) return false;
        return true;
    }
};
