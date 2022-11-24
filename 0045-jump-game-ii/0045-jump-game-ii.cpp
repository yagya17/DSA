class Solution {
public:
    
     int sol(vector<int>& nums,int i, vector<int>&t)
    {   
        if(i>=nums.size()-1) return 0;
        if(t[i]!=10001) return t[i];
         
        for(int j=1;j<=nums[i];j++)
        {
            t[i]=min(t[i],1+sol(nums,i+j,t));
        }
        return t[i];
    }
    int jump(vector<int>& nums) {
        vector<int>t(nums.size(),10001);
        return sol(nums,0,t);
    }
};