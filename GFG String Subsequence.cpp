class Solution {
  public:
    int mod = 1e9+7;
    int solve(string s1,string s2,int i,int j,vector<vector<int>>&dp){
        if(j == s2.length()){       //match 
            return 1;
        }
        if(i == s1.length()) return 0;   //not match
        if(dp[i][j] != -1) return dp[i][j];
        int x = 0,y = 0;
        if(s1[i] == s2[j]){
            x = solve(s1,s2,i+1,j+1,dp);
        }
        y = solve(s1,s2,i+1,j,dp);
        
        return dp[i][j] = (x+y)%mod;
    }
    int countWays(string s1, string s2) {
        vector<vector<int>>dp(s1.length(),vector<int>(s2.length(),-1));
        return solve(s1,s2,0,0,dp);
    }
};
