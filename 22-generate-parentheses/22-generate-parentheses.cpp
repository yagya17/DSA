class Solution {
public:
    vector<string> ans;
    void sol(int tot, int op, int cl, string s)
    {
       if(s.size()==tot*2){ans.push_back(s);return;}
        if(cl<op) {s.push_back(')');sol(tot,op,cl+1,s);s.erase(s.length()-1); }
        if(op<tot){s.push_back('(');sol(tot,op+1,cl,s);s.erase(s.length()-1); }
        
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        sol(n,0,0,s);
        return ans;
    }
};