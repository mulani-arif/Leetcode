class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
        }
        for(auto &it:m)
        {
            if(it.second.size()>=2) return true;
        }
        return false;
    }
};
