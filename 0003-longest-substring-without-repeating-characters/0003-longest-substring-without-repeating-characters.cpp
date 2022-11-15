class Solution {
public:
 
    int lengthOfLongestSubstring(string s) {
        
               vector<int> m(256, -1); int maxi=0;int start=-1;
        for(int i=0;i<s.size();i++)
        {
            
            if(m[s[i]]>start)
            {
                start=m[s[i]];
            }
             m[s[i]]=i;
            maxi=max(maxi,i-start);
        }
        
        return maxi;
    }
};


