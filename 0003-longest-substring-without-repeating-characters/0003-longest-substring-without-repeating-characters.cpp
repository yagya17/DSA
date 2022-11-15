// class Solution {
// public:
 
//     int lengthOfLongestSubstring(string s) {
        
//        map<int,int>m; int maxi=-1;int start=0;
//         for(int i=0;i<s.size();i++)
//         {
            
//             if(m[s[i]]>start)
//             {
//                 start=m[s[i]];
//             }
//              m[s[i]]=i;
//             maxi=max(maxi,i-start);
//         }
        
//         return maxi;
//     }
// };


class Solution {
public:
 int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};