// done this question with brute force approach and using dp
// you can also return true and you will get the answer
int dp[2][501][501];
class Solution {
public:
    int helper(bool aliceTurn, int left , int right, vector<int> &piles){
        if(left > right ) return 0;
        if(dp[aliceTurn][left][right] != -1)return  dp[aliceTurn][left][right];
        int ans = 0;
        if(aliceTurn){
            ans = max(piles[left] + helper(!aliceTurn, left + 1, right, piles) , piles[right] + helper(!aliceTurn, left , right - 1, piles));
        }else{
            ans = min(piles[left] + helper(!aliceTurn, left + 1, right, piles) , piles[right] + helper(!aliceTurn, left , right - 1, piles));
        }
        return dp[aliceTurn][left][right] = ans;
    }
    bool stoneGame(vector<int>& piles) {
        memset(dp, -1, sizeof(dp));
        int n = piles.size();
        int aliceSum = helper(true, 0, n-1, piles);
        int bobSum = accumulate(piles.begin(), piles.end(), 0) - aliceSum;
        return aliceSum > bobSum;
    }
};
