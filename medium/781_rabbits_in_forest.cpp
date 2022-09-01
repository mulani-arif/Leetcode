class Solution {
public:
    int numRabbits(vector<int> &v)
{
   int ans=0;
   map<int,vector<int>> m;
   for(int i=0;i<v.size();i++)
    {
        m[v[i]].push_back(v[i]);
    }
    for(auto &it:m)
    {
        if(it.first==0) ans+=it.second.size();
        else
        {
            ans+=(it.second.size()/(it.first+1))*(it.first+1);
            if(it.second.size()%(it.first+1)!=0)
            {
                ans+=(it.first+1);
            }
        }
    }
    return ans;

}
};
