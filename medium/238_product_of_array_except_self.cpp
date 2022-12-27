class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        long long product=1;
        int ct=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                ct+=1;
                continue;
            }
            product*=nums[i];
        }
        if(ct>1)
        {
            vector<int> v(nums.size(),0);
            return v;
        }
        else if(ct==1)
        {
            vector<int> v(nums.size());
            for(int i=0;i<n;i++)
            {
                if(nums[i]==0) v[i]=product;
                else v[i]=0;
            }
            return v;
        }
        else
        {
            vector<int> v(nums.size());
            for(int i=0;i<n;i++)
            {
                v[i]=product/nums[i];
            }
            return v;
        }

    }
};
