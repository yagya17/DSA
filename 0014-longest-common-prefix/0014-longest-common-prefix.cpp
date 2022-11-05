class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n=strs.size();
        string comp=strs[0];
        for(int j=0;j<n;j++)
        {
            int a=0;int b=0;
            int n=min(comp.length(),strs[j].length());
           while(comp[a]==strs[j][b]&&a<n) {a++;b++;} 
            comp=comp.substr(0,a);
        }  
        
        return comp;
       
    }
};