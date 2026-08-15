class Solution {
    public:
        int longestSubsequence(vector<int> & nums){
            int n = nums.size();

            vector<int> zeros(n ,0);


            if(nums == zeros) return 0;

            int x = 0;


            for(auto it : nums){
                x ^= it;
            }

            return x ? n : n-1;
        }
}


int main() {
    return 0;
}
