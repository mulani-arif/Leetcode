class Solution {
public:
    int climbStairs(int n) {
        int ans=0;
        int a=0,b=1;
        for(int i=0;i<n;i++)
        {
            ans=(a+b);
            a=b;
            b=ans;
            
        }
        return ans;
    }
};
