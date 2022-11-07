class Solution {
public:
    int divide(int dividend, int divisor) {
        long long int cnt=0;
        if(dividend==divisor) return 1;
        long long num1=abs(dividend);
        long long num2=abs(divisor);
     
        if(dividend==abs(divisor)||divisor==abs(dividend)) return -1;
        while(num1>=num2)
        {
            long int mul=num2;long int temp=1;
            while(num1-mul>=mul)
            {
                mul+=mul;
               temp+=temp;
            }
            cnt+=temp;
            num1-=mul;
        }
       
        if(((long long)abs(dividend)!=dividend&&(long long)abs(divisor)==divisor)||((long long)abs(dividend)==dividend&&(long long)abs(divisor)!=divisor)){ cnt=cnt*(-1);}
        
        if(cnt>pow(2,31)-1) {cout<<1<<" ";return pow(2,31)-1;}
        if(cnt<(-1)*pow(2,31)) {cout<<2<<" ";return (-1)*pow(2,31);}
        return cnt;
    }
};