class Solution {
public:
    int t[301][5001];
    
    int sol(vector<int>& coins,int amount,int n)
    {
        if(n==0) t[n][amount]=0;
        if(amount==0)  t[n][amount]= 1;
        else if(t[n][amount]==-1)
        {
            if(coins[n-1]<=amount)
            {
                t[n][amount]=sol(coins,amount-coins[n-1],n)+sol(coins,amount,n-1);
            }
            else{t[n][amount]=sol(coins,amount,n-1);}
        }
        return t[n][amount];
    }
    
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
       for(int i=0;i<n+1;i++)
       {for(int j=0;j<amount+1;j++)
       {
           t[i][j]=-1;
       }
       }
        
        
        return sol(coins,amount,n);
    }
};