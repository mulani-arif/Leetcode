class Solution {
public:
    int size_n(int n)
   {
    int size=0;
    while(n>0)
    {
        n/=10;
        size++;
    }
    return size;
   }
    bool isPalindrome(int n) {
        if(n<0) return false;
        int flag=0;
       int size=size_n(n);
       
       int strt=size-1;
       int end=1;
       int i=0;
       while(n>0)
       {
        int temp1=pow(10,strt);
        int temp2=pow(10,end); 
        if(n/temp1==n%temp2)
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
        
        n%=(temp1);
        n/=10;
        strt-=2;
       
       }
       if(flag==0) return true;
       else return false;
    }
};
