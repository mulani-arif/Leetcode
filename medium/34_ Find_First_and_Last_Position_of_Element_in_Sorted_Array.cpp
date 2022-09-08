class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        long long lo1=0,lo2=0,hi1=nums.size()-1,hi2=nums.size()-1;
        int a=-1,b=-1;
        int mid1,mid2;
        while(hi1-lo1>1 || hi2-lo2>1)
        {
            mid1=(hi1+lo1)/2;
            if(nums[mid1]>=target)
            {
                hi1=mid1;
            }
            else lo1=mid1+1;
            
            mid2=(hi2+lo2)/2;
            if(nums[mid2]<=target)
            {
                lo2=mid2;
            }
            else hi2=mid2-1;
        }
        if(nums[lo1]==target) a=lo1;
        else if(nums[hi1]==target)
        a=hi1;
        
        if(nums[hi2]==target) b=hi2;
        else if(nums[lo2]==target)
        b=lo2;
        
       return {a,b};
    }
};
