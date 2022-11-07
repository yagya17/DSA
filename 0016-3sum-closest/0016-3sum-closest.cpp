class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mini=INT_MIN;
        int maxi=INT_MAX;
        // for(int i=0;i<nums.size();i++) cout<<nums[i];
        // cout<<endl;
        for(int k=0;k<nums.size();k++)
        {
            
            int i=k+1;int j=nums.size()-1;
            while(i<j&&i<nums.size())
            { 
                if(nums[i]+nums[j]+nums[k]<target) {mini=max(nums[i]+nums[j]+nums[k],mini);i++;}
                else if(nums[i]+nums[j]+nums[k]>target){ maxi=min(nums[i]+nums[j]+nums[k],maxi);j--;}
                else return target;
            }
           
        }
        
        if(mini==INT_MIN) return maxi;
        if(maxi==INT_MAX) return mini;
        int a=abs(target-mini);
        int b=abs(maxi-target);
        if(a<b) return mini;
        else return maxi;
    }
};