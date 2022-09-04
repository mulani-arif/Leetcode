class Solution {
public:
    string addBinary(string a, string b) {
        int alen=a.size();
        int blen=b.size();
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans;
        if(a.size()>b.size())
        {
            while(alen!=blen)
            {
                b.push_back('0');
                alen--;
            }
        }
         if(a.size()<b.size())
        {
            while(alen!=blen)
            {
                a.push_back('0');
                blen--;
            }
        }
        a.push_back('0');
        b.push_back('0');//if last term have carry.
        
        int carry=0;
        for(int i=0;i<a.size();i++)
        {
           int x=(a[i]-'0');
           int y=(b[i]-'0');
           int sum=x+y+carry;
           if(sum==0)
           {
            ans.push_back('0');
            carry=0;
           }
           else if(sum==1)
           {
            ans.push_back('1');
            carry=0;
           }
           else if(sum==2)
           {
            ans.push_back('0');
            carry=1;
           }
           else
           {
            ans.push_back('1');
            carry=1;
           }
        }
        for(int i=ans.size()-1;i>=0;i--)
        {
            if(ans[i]=='1') break;
            else if(ans.size()!=1)ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
