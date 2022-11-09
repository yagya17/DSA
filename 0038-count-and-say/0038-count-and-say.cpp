class Solution {
public:
    
    string s="";
    string sol(int n)
    {
        if(n==1) return "1";
        if(n==2){return "11";}
        s=sol(n-1);
        string ret="";
        int cnt=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1]) cnt++;
            else{ret.append(to_string(cnt));ret.append(to_string(s[i-1]-48));cnt=1;}
        }
    
       ret.append(to_string(cnt));ret.append(to_string(s[s.size()-1]-48));
 
        return ret;
    }
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2){return "11";}
        sol(n+1);
        return s;
        
    }
};