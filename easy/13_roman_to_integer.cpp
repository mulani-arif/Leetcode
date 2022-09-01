class Solution {
public:
    map<char,int> m;
  
    int romanToInt(string s) {
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
        int len=s.size();
        int ans=0;
        int i=0;
         while(i<s.size())
         {
            if(s[i]=='C' && s[i+1]=='M') 
            {ans+=900;i+=2;}
            if(s[i]=='C' && s[i+1]=='D') 
            {ans+=400;i+=2;}
                        
            if(s[i]=='X' && s[i+1]=='C') 
            {ans+=90;i+=2;}
            if(s[i]=='X' && s[i+1]=='L') 
            {ans+=40;i+=2;}
            
            if(s[i]=='I' && s[i+1]=='X') 
            {ans+=9;i+=2;}
            if(s[i]=='I' && s[i+1]=='V') 
            {ans+=4;i+=2;}
             
             ans+=m[s[i]];
             i++;
         }
        return ans;
    }
};
