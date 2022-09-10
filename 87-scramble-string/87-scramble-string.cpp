class Solution {
public:
   unordered_map<string,bool>t;

int sol(string a, string b)
{int n=a.length();
 if(a.length()!=b.length()) return 0;
 if(!n) return 1; 
 string key=a+" "+b;
    if(t.find(key)!=t.end()) return t[key];
      if(a.compare(b)==0) return 1;
       // if(a.length()<=1) return 0;
    bool flag=0;
    for(int i=1;i<a.length();i++)
    { 
       if(sol(a.substr(0,i),b.substr(0,i))&&sol(a.substr(i,n-i),b.substr(i,n-i)) )
       {flag=1;break;}
       if(sol(a.substr(0,i),b.substr(n-i,i))&&sol(a.substr(i,n-i),b.substr(0,n-i)) )
       {flag=1;break;}
    }
    t[key]=flag;
    return flag;
}
    bool isScramble(string a, string b) {
  
    if(a.compare(b)==0) return 1;
    
  
    return sol(a,b);
    }
};