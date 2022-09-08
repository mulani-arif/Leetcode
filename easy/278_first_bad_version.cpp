// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    //GGGGGBBBBBB
    int firstBadVersion(int n) {
        long long lo=1,hi=n,mid;
        while(hi-lo>1)
        {
            mid=(hi+lo)/2;
            if(isBadVersion(mid))
            {
                hi=mid;
            }
            else
            {
                lo=mid+1;
            }
        }
        if(isBadVersion(lo)) return lo;
        else return hi;
    }
};
