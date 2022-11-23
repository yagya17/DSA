class Solution {
public:
    // int t[10001][1]
    // int sol(vector<int> nums,int i,int sum)
    // {
    //     if(i>=nums.size()) return sum;
    //     int res=max(sol(nums,i+1,sum+nums[i]),sol(nums,i+1,nums[i]));
    //     sum=max(res,sum);
    //     return sum;
    // }
    int maxSubArray(vector<int>& nums) {
        
        int sum=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++)
        {
         sum=nums[i]+(sum>0?sum:0);
            res=max(res,sum);
        }
        return res;
        
    }
};