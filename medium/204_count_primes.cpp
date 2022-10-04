class Solution {
public:
   
    int countPrimes(int n) {
         vector<bool> isprime(n,1);
        int ans=0;
        for(int i=2;i<n;i++)
        {
            if(isprime[i]==true)
            {
                ans++;
                for(int j=2*i;j<n;j+=i)
                {
                    isprime[j]=false;
                }
            }
        }
        return ans;
    }
};
