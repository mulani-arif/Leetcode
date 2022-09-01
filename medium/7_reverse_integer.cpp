class Solution {
public:
const int N=INT_MAX;
const int M=INT_MIN;

int reverse(int x)
{
   int size=0;
    if(x==N || x==M) return 0;
   long long X=x>=0?1LL*x:-1*x*1LL;
   long long temp=X;
   while(X>0)
   {
    size++;X/=10;
   }
   long long ans=0;
   while(size--)
   {
    ans+=(temp%10)*pow(10,size);
    //cout<<ans<<endl;
    if(ans<0) return 0;
    else if(ans>N || ans<M) return 0;
    temp/=10;
   }
   return x>=0?ans:-1*ans;
}
};
