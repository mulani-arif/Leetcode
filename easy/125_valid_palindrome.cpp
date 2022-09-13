class Solution {
public:
    bool isPalindrome(string s) {
        string real;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')  real.push_back(s[i]);
            else if(s[i]>='A' && s[i]<='Z') real.push_back(s[i]+32);
            else if(s[i]>='0' && s[i]<='9') real.push_back(s[i]);
        
        }
        int n=real.size()-1;
	    for(int i=0;i<real.size()/2;i++)
	    {
	        if(real[i]!=real[n-i]) return false;
	    }
	    return true;
        }
};
