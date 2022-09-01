class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto &it:m)
        {
            if(it.second.size()==1) return it.first;
        }
        return ans;
    }
};
