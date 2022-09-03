class Solution {
public:
    double eps=1e-6;
   
    int mySqrt(int x) 
    {
        double lo=1,hi=x,mid;
        if(x==0) return 0;
        if(x==1) return 1;
        while(hi-lo>eps)
        {
            mid=(hi+lo)/2;
            if(mid*mid<x) lo=mid;
            else hi=mid;
        }
        int ans=hi;
        return ans;
    }
};
