// done this question with the help of dp and game theory concept 
class Solution {
public:
    bool helper(int n, vector<int> &dp){
        if(n<1) return false;
        bool ans = false;

        if(dp[n] != -1) return dp[n];
        for(int i = 1; i*i <= n ;i++){
            ans = ans || !helper(n-i*i,dp);
        }

        return  dp[n]=ans;

    }
    bool winnerSquareGame(int n) {
        vector<int> dp(n+1,-1);
        return helper(n,dp);
    }
}
