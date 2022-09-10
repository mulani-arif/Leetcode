class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1,mid;
        if(nums.size()==1)
        {
            if(nums[0]==target) return 0;
            else return -1;
        }
        while(hi-lo>=0)
        {
            mid=(hi+lo)>>1;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
        return -1;
    }
};
